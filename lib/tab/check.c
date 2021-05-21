/*
** EPITECH PROJECT, 2021
** check tab
** File description:
** lib
*/

#include "../../include/lib.h"

my_bool check_tab(char **tab)
{
    if (tab == NULL)
        return (true);
    return (false);
}

my_bool check_str(char *str)
{
    if (str == NULL)
        return (true);
    return (false);
}

my_bool check_char(char c)
{
    if (c == '\0')
        return (true);
    return (false);
}

my_bool check_ht_item(ht_item_t *item)
{
    if (item == NULL)
        return (true);
    return (false);
}