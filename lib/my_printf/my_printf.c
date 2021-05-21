/*
** EPITECH PROJECT, 2020
** My_prinft
** File description:
** Recode myprintf function
*/

#include "../../include/lib.h"

int find_print(char flag, char *src)
{
    int i = 0;
    while (src[i] != 0) {
        if (src[i] == flag)
            return (i);
        i++;
    }
    return (84);
}

int main_loop(char *src, va_list *ap, char *flag)
{
    int find_flag = 0;
    void (*test[8]) (va_list *) = {&(my_print_int), &(my_print_char),
        &(my_print_str), &(my_print_pointer),
        &(my_print_octal), &(my_print_hexa_lower),
        &(my_print_hexa_upper), &(my_print_int)};
    for (int i = 0; src[i] != 0; i++) {
        if (i != 0 && src[i - 1] == '%'){
                find_flag = find_print(src[i], flag);
                if (find_flag == 84)
                    return (84);
                else
                    (*test[find_flag]) (ap);
            }
        else if (src[i] != '%')
            write(1, &src[i], 1);
    }
    return (0);
}

int my_printf(char *src, ...)
{
    va_list ap;
    char flag[9] = {'d', 'c', 's', 'p', 'o', 'x', 'X', 'i', 0};
    va_start(ap, src);
    main_loop(src, &ap, flag);
    va_end(ap);
    return (0);
}