/*
** EPITECH PROJECT, 2021
** mydigit
** File description:
** lib
*/

#include "../../include/lib.h"

my_bool my_isdigit(char c)
{
    return ((c >= '0' && c <= '9'));
}