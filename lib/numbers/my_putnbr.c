/*
** EPITECH PROJECT, 2021
** putnbr
** File description:
** lib
*/

#include "../../include/lib.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return (0);
}