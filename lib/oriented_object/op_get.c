/*
** EPITECH PROJECT, 2021
** op get
** File description:
** lib
*/

#include "../../include/lib.h"

char *op_get(op_t *this, int index)
{
    op_item_t *tmp = this->top;
    while (tmp != NULL) {
        if (tmp->nb == index)
            return tmp->str;
        tmp = tmp->next;
    }
}