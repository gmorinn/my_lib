/*
** EPITECH PROJECT, 2020
** Display myprintf
** File description:
** My prints for myprintf
*/

#include "../../include/lib.h"

void my_print_str(va_list *ap)
{
    char *s = va_arg(*ap, char *);
    write(1, s, my_strlen(s));
}

void my_print_char(va_list *ap)
{
    char c = va_arg(*ap, int);
    write(1, &c, 1);
}

void my_print_int(va_list *ap)
{
    int d = va_arg(*ap, int);
    my_put_nbr(d);
}

void my_print_hexa_lower(va_list *ap)
{
    int d = va_arg(*ap, int);
    hexadecimal_lower(d);
}

void my_print_pointer(va_list *ap)
{
    int d = va_arg(*ap, int);
    pointer(d);
}
