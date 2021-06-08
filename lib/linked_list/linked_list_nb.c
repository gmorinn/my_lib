/*
** EPITECH PROJECT, 2021
** linked list nb
** File description:
** lib
*/

#include "../../include/lib.h"

void ll_display_nb(list_t *a)
{
    if (!check_list(a)) {
        my_printf("%d\n", a->nb);
        ll_display_nb(a->next);
    }
}

int ll_sum(list_t *a)
{
    static int res = 0;
    if (!check_list(a)) {
        res += a->nb;
        return ll_sum(a->next);
    }
    return res;
}

int ll_max(list_t *a)
{
    static int nb = -32768;
    while (!IS_LIST(a)) {
        if (nb < a->nb)
            nb = a->nb;
        a = a->next;
    }
    return nb;
}

list_t *search_nb(list_t *a, int key)
{
    if (IS_LIST(a))
        return NULL;
    if (a->nb == key)
        return a;
    else
        return search_nb(a->next, key);
}