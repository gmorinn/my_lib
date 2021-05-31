/*
** EPITECH PROJECT, 2021
** shell
** File description:
** linkedlist2
*/

#include "../../include/lib.h"

int position_str(list_t *a, char *str)
{
    int lenght = 0;
    list_t *tmp = a;
    while (!(IS_LIST(tmp))) {
        if (my_strcmp(str, tmp->str) == 0)
            return lenght;
        lenght++;
        tmp = tmp->next;
    }
    return 84;
}

my_bool search_element(char *var, list_t *a)
{
    list_t *tmp = a;

    while (!IS_LIST(tmp)) {
        if (my_strcmp(var, tmp->str) == 0)
            return true;
        tmp = tmp->next;
    }
    return false;
}

int list_lenght(list_t *li)
{
    int size = 0;
    while (!(IS_LIST(li))) {
        ++size;
        li = li->next;
    }
    return size;
}