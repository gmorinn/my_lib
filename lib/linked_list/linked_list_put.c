/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../../include/lib.h"

list *put_end(list *a, char *str)
{
    list *tmp = new_list();
    list *element = MALLOC(element, sizeof(list));
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

list *put_begin(list *test, char *str)
{
    list *new = MALLOC(new, sizeof(list));
    new->str = str;
    new->next = test;
    test = new;
    return (test);
}

list *put_middle(list *a, char *str, int pos)
{
    int i = 0;
    list *prev = new_list();
    list *current;
    list *new = MALLOC(new, sizeof(list));
    new->str = str;
    for (current = a; !IS_LIST(current); i += 1) {
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