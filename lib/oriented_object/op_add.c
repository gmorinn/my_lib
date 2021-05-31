/*
** EPITECH PROJECT, 2021
** add op
** File description:
** lib
*/

#include "../../include/lib.h"

void op_put_end(op_t *this, int nb, char *str)
{
    op_item_t *new_item = malloc(sizeof(op_item_t));
    new_item->nb = nb;
    new_item->str = my_strdup(str);
    new_item->next = this->top;
    this->top = new_item;
    this->lenght++;
}