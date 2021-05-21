/*
** EPITECH PROJECT, 2021
** lib
** File description:
** mystrcmp
*/

#include "../../include/lib.h"

int my_strcmp(char *str1, char *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return (84);
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
        if (str1[i] != str2[i])
            return 84;
    return 0;
}