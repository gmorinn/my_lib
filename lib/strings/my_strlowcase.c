/*
** EPITECH PROJECT, 2021
** convert in lowcase
** File description:
** lib
*/

#include "../../include/lib.h"

char low_c(char c)
{
    return (c + 32);
}

char *my_str_lowcase(char *str)
{
    for (int i = 0; !check_char(str[i]); i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = low_c(str[i]);
    return (str);
}