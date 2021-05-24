/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** test file
*/

#include "include/project.h"

int main(void)
{
    list *a = new_list();
    a = put_end(a, "11111");
    a = put_end(a, "22222");
    a = put_end(a, "33333");
    a = put_end(a, "3ffg3333");
    a = put_end(a, "55555");
    a = put_end(a, "66666");
    a = put_end(a, "55555");
    a = put_middle(a, "milieu", 4);
    display(&a);
    my_printf("\t%d %d\n", position_str(a, "11111"), search_element("55555", a));
    if (check_list(a))
        my_printf("vide\n");
    else
        display(&a);
    my_printf("---------------------------------\n");
    list *tmp = copylist(a->next);
    my_printf("%s", tmp->str);
    rm_list(&a);
    if (check_list(a))
        my_printf("vide\n");
    else
        display(&a);
    return 0;
}
