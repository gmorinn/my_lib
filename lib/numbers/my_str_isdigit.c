/*
** EPITECH PROJECT, 2021
** str is digit ?
** File description:
** lib
*/

#include "../../include/lib.h"

my_bool my_str_is_digit(char *str)
{
    if (check_str(str))
        return false;
    for (int i = 0; str[i] != '\0'; i++)
        if (!my_isdigit(str[i]))
            return false;
    return true;
}