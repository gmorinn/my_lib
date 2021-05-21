/*
** EPITECH PROJECT, 2020
** Octal
** File description:
** Conversion decimal to Octal
*/

#include "../../include/lib.h"

void octal(int nb)
{
    int stack[3];
    int i = 0;
    int result;
    if (nb < 8)
        my_put_nbr(nb);
    else
    {
        while (nb != 0) {
            result = nb % 8;
            stack[i] = result;
            nb = nb / 8;
            i = i + 1;
        }
        for (int y = i - 1; y >= 0; y--){
            my_put_nbr(stack[y]);
        }
    }
}
