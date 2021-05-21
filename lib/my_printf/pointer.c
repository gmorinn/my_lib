/*
** EPITECH PROJECT, 2020
** Pointeur
** File description:
** Pointeur for myprintf
*/

#include "../../include/lib.h"

void pointer(int nb)
{
    if (nb == 0)
        my_putstr("(nil)");
    else {
        my_putstr("0x");
        hexadecimal_lower(nb);
    }
}
