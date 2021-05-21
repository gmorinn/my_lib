/*
** EPITECH PROJECT, 2021
** hash_table basic
** File description:
** lib
*/

#include "../../include/lib.h"

int my_pow(int nb, int pow)
{
    int result = 1;
    if (pow < 0)
        return (0);
    if (pow == 0)
        return (1);
    for (int p = 1; p <= pow; p++)
        result = result * nb;
    return (result);
}
