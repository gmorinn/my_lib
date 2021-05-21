/*
** EPITECH PROJECT, 2021
** count element tab
** File description:
** lib
*/

#include "../../include/lib.h"

int count_elem_tab(char **tab)
{
    int nb = 0;

    if (check_tab(tab))
        return (-1);
    while (!check_str(tab[nb]))
        nb++;
    return nb;
}