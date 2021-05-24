/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../../include/lib.h"

void rm_list(list **li)
{
    list *tmp = (*li);
    list *next = new_list();
    if (IS_LIST(tmp))
        return;
    while (!IS_LIST(tmp)) {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
    (*li) = NULL;
}

list *rm_element(list *li)
{
    if (IS_LIST(li))
        return (li);
    list *element = MALLOC(element, sizeof(list));
    element = li->next;
    free(li);
    li = new_list();
    return (element);
}

void rm_at_pos(list **a, int pos)
{
    if (IS_LIST(*a))
        return;
    list *tmp = (*a);
    if (pos == 0) {
        (*a) = tmp->next;
        free(tmp);
        return;
    }
    for (int i = 0; (!IS_LIST(tmp)) && (i < pos - 1); i++)
        tmp = tmp->next;
    if (IS_LIST(tmp) || IS_LIST(tmp->next))
        return;
    list *node = tmp->next->next;
    free(tmp->next);
    tmp->next = node;
}