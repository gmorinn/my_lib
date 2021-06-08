/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** test file
*/

#include "include/project.h"

int main(void)
{
    int tab[] = {2, 52, 6, 5};
    list_t *a = new_list();
    for (int i = 0; i < 4; i++)
        a = ll_insert_nb_end(a, tab[i]);
    ll_display_nb(a);
    rm_list(&a);
    return 0;
}