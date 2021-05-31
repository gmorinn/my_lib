/*
** EPITECH PROJECT, 2021
** rm op
** File description:
** lib
*/

#include "../../include/lib.h"

void op_clear(op_t *this)
{
    op_item_t *tmp;
    while (this->top) {
        tmp = this->top->next;
        free_string(&this->top->str);
        FREE(this->top);
        this->top = tmp;
    }
    this->lenght = 0;
}

int op_rm_last(op_t *this)
{
    int value;
    op_item_t *tmp;

    if (!this->top)
        return -1;
    tmp = this->top->next;
    value = this->top->nb;
    free_string(&this->top->str);
    free(this->top);
    this->top = tmp;
    this->lenght--;
    return value;
}

void op_rm_all(op_t *this)
{
    if (this)
        op_clear(this);
    FREE(this);
}