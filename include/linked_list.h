/*
** EPITECH PROJECT, 2021
** Linked_list
** File description:
** lib
*/

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include "lib.h"
#define IS_LIST(i) check_list(i)

typedef struct list list;
struct list
{
    int first;
    char *str;
    list *next;
};

list *copylist(list *head);
my_bool check_list(list *li);
list *new_list(void);
void display(list **a);
list *rm_element(list *li);
void rm_list(list **li);
list *put_end(list *a, char *str);
list *put_begin(list *test, char *str);
int list_lenght(list *li);
void rm_at_pos(list **a, int pos);
list *put_middle(list *a, char *str, int pos);
my_bool search_element(char *var, list *a);
int position_str(list *a, char *str);

#endif /* !LINKED_LIST_H_ */
