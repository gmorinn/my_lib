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

typedef struct list_s list_t;
struct list_s
{
    int first;
    int nb;
    char *str;
    list_t *next;
};

list_t *copylist(list_t *head);
my_bool check_list(list_t *li);
list_t *new_list(void);
void display(list_t *a);
list_t *ll_insert_nb_end(list_t *a, int tab);
list_t *rm_element(list_t *li);
void rm_list(list_t **li);
void ll_display_nb(list_t *a);
int ll_sum(list_t *a);
list_t *put_end(list_t *a, char *str);
list_t *put_begin(list_t *test, char *str);
int list_lenght(list_t *li);
void rm_at_pos(list_t **a, int pos);
list_t *put_middle(list_t *a, char *str, int pos);
my_bool search_element(char *var, list_t *a);
int position_str(list_t *a, char *str);
int ll_max(list_t *a);
list_t *search_nb(list_t *a, int key);
list_t *ll_insert_nb_begin(list_t *a, int nb);
void ll_insert_nb_at_pos(list_t *a, int x, int index);

#endif /* !LINKED_LIST_H_ */
