/*
** EPITECH PROJECT, 2021
** linked list nb
** File description:
** lib
*/

#include "../../include/lib.h"

list_t *ll_insert_nb_end(list_t *a, int tab)
{
    list_t *tmp = new_list();
    list_t *element = MALLOC(element, sizeof(list_t));
    element->nb = tab;
    element->next = NULL;
    if (IS_LIST(a))
        return (element);
    tmp = a;
    while (!(IS_LIST(tmp->next)))
        tmp = tmp->next;
    tmp->next = element;
    return (a);
}

list_t *ll_insert_nb_begin(list_t *a, int nb)
{
    list_t *tmp = malloc(sizeof(list_t));
    tmp->nb = nb;
    tmp->next = a;
    return tmp;
}

void ll_insert_nb_at_pos(list_t *a, int x, int index)
{
    list_t *t = new_list();
    list_t *p = a;
    if (index < 0 || index > list_lenght(a))
        return;
    t = malloc(sizeof(list_t));
    t->nb = x;
    if (x == 0) {
        t->next = a;
        a = t;
    } else {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}