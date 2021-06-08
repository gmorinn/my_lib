/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../../include/lib.h"

list_t *put_end(list_t *a, char *str)
{
    list_t *tmp = new_list();
    list_t *element = MALLOC(element, sizeof(list_t));
    element->str = str;
    element->next = NULL;
    if (IS_LIST(a))
        return (element);
    tmp = a;
    while (!(IS_LIST(tmp->next)))
        tmp = tmp->next;
    tmp->next = element;
    return (a);
}

list_t *put_begin(list_t *test, char *str)
{
    list_t *new = MALLOC(new, sizeof(list_t));
    new->str = str;
    new->next = test;
    test = new;
    return (test);
}

list_t *put_middle(list_t *a, char *str, int pos)
{
    int i = 0;
    list_t *prev = new_list();
    list_t *current;
    list_t *new = MALLOC(new, sizeof(list_t));
    new->str = str;
    for (current = a; !IS_LIST(current); i++) {
        if (i >= pos)
            break;
        prev = current;
        current = current->next;
    }
    new->next = current;
    if (prev != NULL)
        prev->next = new;
    else
        a = new;
    return a;
}