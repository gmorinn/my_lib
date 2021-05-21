/*
** EPITECH PROJECT, 2020
** My prints V2
** File description:
** Prints V2 for myprintf
*/

#include "../../include/lib.h"

void my_print_octal(va_list *ap)
{
    int d = va_arg(*ap, int);
    octal(d);
}

void my_print_hexa_upper(va_list *ap)
{
    int d = va_arg(*ap, int);
    hexadecimal_upper(d);
}