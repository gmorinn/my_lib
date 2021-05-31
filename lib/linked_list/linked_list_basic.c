/*
** EPITECH PROJECT, 2021
** shell
** File description:
** linkedlist2
*/

#include "../../include/lib.h"

my_bool check_list(list_t *li)
{
    if (li == NULL)
        return (true);
    return (false);
}

list_t *new_list(void)
{
    return (NULL);
}

void display(list_t **a)
{
    list_t *tmp = (*a);
    while (tmp != NULL) {
        my_printf("%s\n", tmp->str);
        tmp = tmp->next;
    }
}

list_t *copylist(list_t *head)
{
    list_t *newnode = MALLOC(newnode, sizeof(list_t));
    newnode->str = head->str;
    newnode->next = NULL;
    return newnode;
}