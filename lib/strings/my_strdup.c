/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_strdup
*/

#include "../../include/lib.h"

char *my_strdup(char const *src)
{
    char *memory = MALLOC(memory, sizeof(char) * (my_strlen(src) + 1));
    my_strcpy(memory, src);
    return (memory);
}