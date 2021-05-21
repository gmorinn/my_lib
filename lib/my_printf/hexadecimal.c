/*
** EPITECH PROJECT, 2020
** Hexadecimal
** File description:
** Printf %x
*/

#include "../../include/lib.h"

void hexa_digit(int decimal)
{
    if (decimal > 15) {
        decimal = decimal / 16;
        my_putchar(decimal + '0');
    }
    else
        my_putstr("");
}

void hexa_letter_lower(int decimal)
{
    int result = decimal % 16;
    if (result > 9)
        my_putchar(result + 87);
    else
        my_putchar(result + '0');
}

void hexa_letter_upper(int decimal)
{
    int result = decimal % 16;
    if (result > 9)
        my_putchar(result + 55);
    else
        my_putchar(result + '0');
}

void hexadecimal_lower(int decimal)
{
    hexa_digit(decimal);
    hexa_letter_lower(decimal);
}

void hexadecimal_upper(int decimal)
{
    hexa_digit(decimal);
    hexa_letter_upper(decimal);
}
