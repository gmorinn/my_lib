/*
** EPITECH PROJECT, 2021
** op create
** File description:
** lib
*/

#include "../../include/lib.h"

void init_op(op_t **this)
{
    (*this)->op_put_end = op_put_end;
    (*this)->op_rm_last = op_rm_last;
    (*this)->op_clear = op_clear;
    (*this)->op_length = op_length;
    (*this)->op_print = op_print;
    (*this)->op_set_str = op_set_str;
    (*this)->op_rm_all = op_rm_all;
    (*this)->lenght = 0;
    (*this)->op_get = op_get;
    (*this)->top = NULL;
}

op_t *create_op(void)
{
    op_t *this = MALLOC(this, sizeof(op_t));
    init_op(&this);
    return this;
}
