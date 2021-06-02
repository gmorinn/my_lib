/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** test file
*/

#include "include/project.h"

int main(void)
{
    op_t *tmp = create_op();

    tmp->op_put_end(tmp, 1, "My");
    tmp->op_put_end(tmp, 2, NULL);
    tmp->op_put_end(tmp, 3, "Is");
    tmp->op_put_end(tmp, 4, "Guillaume");

    my_printf("Affichage de la pile :\n");
    tmp->op_print(tmp);
    my_printf("------\n");

    my_printf("Get value of %d: %s\n", tmp->op_search(tmp, "Guillaume"), tmp->op_get(tmp, 4));
    my_printf("Get value of 55: %s\n", tmp->op_get(tmp, 55));
    tmp->op_set_str(&tmp, 4, "MORIN");
    my_printf("----Change Value of 4-----\n");
    my_printf("Get value of 4: %s\n", tmp->op_get(tmp, 4));
    my_printf("------");
    my_printf("Nb d'elements : %d\n", tmp->op_length(tmp));
    my_printf("------\nLength: %d\n----", tmp->op_length(tmp));

    my_printf("Deux valeurs soutirees de la pile: ");
    my_printf("%d - %d\n", tmp->op_rm_last(tmp), tmp->op_rm_last(tmp));

    my_printf("\nAffichage de la pile:\n");
    tmp->op_print(tmp);
    my_printf("------");

    tmp->op_clear(tmp);
    tmp->op_put_end(tmp, 5, "OK!");

    my_printf("\nAffichage de la pile après vidage et ajout d'une valeur:\n");
    tmp->op_print(tmp);
    my_printf("------\n");

    tmp->op_rm_all(tmp);
    return 0;
}