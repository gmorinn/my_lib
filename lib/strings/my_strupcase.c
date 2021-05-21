/*
** EPITECH PROJECT, 2021
** convert in lowcase
** File description:
** lib
*/

#include "../../include/lib.h"

char up_c(char c)
{
    return (c - 32);
}

char *my_str_upcase(char *str)
{
    for (int i = 0; !check_char(str[i]); i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = up_c(str[i]);
    return (str);
}