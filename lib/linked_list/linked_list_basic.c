/*
** EPITECH PROJECT, 2021
** shell
** File description:
** linkedlist2
*/

#include "../../include/lib.h"

my_bool check_list(list *li)
{
    if (li == NULL)
        return (true);
    return (false);
}

list *new_list(void)
{
    return (NULL);
}

void display(list **a)
{
    list *tmp = (*a);
    while (tmp != NULL) {
        my_printf("%s\n", tmp->str);
        tmp = tmp->next;
    }
}

list *copylist(list* head)
{
    list* newNode = MALLOC(newNode, sizeof(list));
    newNode->str = head->str;
    newNode->next = NULL;
    return newNode;
}