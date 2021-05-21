/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_strcat
*/

#include "../../include/lib.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int x = 0;

    while (dest[i] != '\0')
        i = i + 1;
    while (src[x] != '\0') {
        dest[i] = src[x];
        i = i + 1;
        x = x + 1;
    }
    dest[i] = '\0';
    return (dest);
}