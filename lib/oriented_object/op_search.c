/*
** EPITECH PROJECT, 2021
** search op
** File description:
** lib
*/

#include "../../include/lib.h"

int op_search(op_t *this, char *str)
{
    op_item_t *tmp = this->top;
    while (tmp != NULL) {
        if (!my_strcmp(str, tmp->str))
            return tmp->nb;
        tmp = tmp->next;
    }
    return (-1);
}