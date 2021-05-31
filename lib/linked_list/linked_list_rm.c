/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../../include/lib.h"

void rm_list(list_t **li)
{
    list_t *tmp = (*li);
    list_t *next = new_list();
    if (IS_LIST(tmp))
        return;
    while (!IS_LIST(tmp)) {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
    (*li) = NULL;
}

list_t *rm_element(list_t *li)
{
    if (IS_LIST(li))
        return (li);
    list_t *element = MALLOC(element, sizeof(list_t));
    element = li->next;
    free(li);
    return (element);
}

void rm_at_pos(list_t **a, int pos)
{
    if (IS_LIST(*a))
        return;
    list_t *tmp = (*a);
    if (pos == 0) {
        (*a) = tmp->next;
        FREE(tmp);
        return;
    }
    for (int i = 0; (!IS_LIST(tmp)) && (i < pos - 1); i++)
        tmp = tmp->next;
    if (IS_LIST(tmp) || IS_LIST(tmp->next))
        return;
    list_t *node = tmp->next->next;
    FREE(tmp->next);
    tmp->next = node;
}