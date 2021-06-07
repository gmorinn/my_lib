/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** test file
*/

#include "include/project.h"

int main(void)
{
    int tab[] = {2, 52, 6, 42, 5, 541, 53};
    list_t *a = new_list();
    for (int i = 0; i < 7; i++)
        a = put_nb(a, tab[i]);
    ll_display_nb(a);
    list_t *x = search_nb(a, 500);
    my_printf("SIZE = %d\n", ll_max(a));
    my_printf("NB OF 42 = %d\n", x ? x->nb : 84);
    rm_list(&a);
    return 0;
}