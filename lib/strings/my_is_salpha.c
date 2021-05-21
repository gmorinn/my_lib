/*
** EPITECH PROJECT, 2021
** is alpha ?
** File description:
** lib
*/

#include "../../include/lib.h"

my_bool my_isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

my_bool my_str_isalpha(char *str)
{
    for (int i = 0; !check_char(str[i]); i++)
        if (!my_isalpha(str[i]))
            return false;
    return true;
}
