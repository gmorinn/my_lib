/*
** EPITECH PROJECT, 2021
** shell
** File description:
** linkedlist2
*/

#include "../../include/lib.h"

int position_str(list *a, char *str)
{
    int lenght = 0;
    list *tmp = a;
    while (!(check_list(tmp))) {
        if (my_strcmp(str, tmp->str) == 0)
            return lenght;
        lenght++;
        tmp = tmp->next;
    }
    return 84;
}

my_bool search_element(char *var, list *a)
{
    list *tmp = a;

    while (!check_list(tmp)) {
        if (my_strcmp(var, tmp->str) == 0)
            return true;
        tmp = tmp->next;
    }
    return false;
}

int list_lenght(list *li)
{
    int size = 0;
    while (!(check_list(li))) {
        ++size;
        li = li->next;
    }
    return size;
}