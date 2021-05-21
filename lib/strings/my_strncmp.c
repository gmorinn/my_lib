/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_strncmp
*/

#include "../../include/lib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i < n) {
        if (s1[i] != s2[i])
            return (0);
        if ((n - 1) == i)
            return (1);
        i = i + 1;
    }
    return (1);
}