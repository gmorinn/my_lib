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
    if (check_list(tmp))
        return;
    while (!check_list(tmp)) {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
    (*li) = NULL;
}

list *rm_element(list *li)
{
    if (check_list(li))
        return (li);
    list *element = malloc(sizeof(list));
    element = li->next;
    free(li);
    li = new_list();
    return (element);
}

void rm_at_pos(list **a, int pos)
{
    if (check_list(*a))
        return;
    list *tmp = (*a);
    if (pos == 0) {
        (*a) = tmp->next;
        free(tmp);
        return;
    }
    for (int i = 0; (!check_list(tmp)) && (i < pos - 1); i++)
        tmp = tmp->next;
    if (check_list(tmp) || check_list(tmp->next))
        return;
    list *node = tmp->next->next;
    free(tmp->next);
    tmp->next = node;
}