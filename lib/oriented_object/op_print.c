/*
** EPITECH PROJECT, 2021
** op print
** File description:
** lib
*/

#include "../../include/lib.h"

void op_print(op_t *this)
{
    op_item_t *tmp = this->top;
    while (tmp != NULL) {
        my_printf("%s\n", tmp->str);
        tmp = tmp->next;
    }
}