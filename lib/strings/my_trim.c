/*
** EPITECH PROJECT, 2021
** my_trim
** File description:
** lib
*/

#include "../../include/lib.h"

my_bool is_space(char c)
{
    return ((c == ' ') || (c == '\t') || (c == '\n'));
}

char *trim(char *str)
{
    char *ptr = NULL;
    int size = 0;
    int x = 0;

    for (int i = 0; !check_char(str[i]); i++) {
        if (is_space(str[i]))
            size++;
    }
    ptr = MALLOC(ptr, sizeof(char) * (my_strlen(str) - size + 1));
    for (int i = 0; !check_char(str[i]); i++) {
        if (!is_space(str[i])) {
            ptr[x] = str[i];
            x++;
        }
    }
    ptr[x] = '\0';
    return ptr;
}