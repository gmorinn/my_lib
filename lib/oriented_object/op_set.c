/*
** EPITECH PROJECT, 2021
** op set
** File description:
** lib
*/

#include "../../include/lib.h"

void op_set_str(op_t **this, int index, char *str)
{
    op_item_t *tmp = (*this)->top;
    while (tmp != NULL) {
        if (tmp->nb == index) {
            FREE(tmp->str);
            tmp->str = my_strdup(str);
            return;
        }
        tmp = tmp->next;
    }
}
