/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** test file
*/

#include "include/project.h"

int main(void)
{
    tree_t *tmp = join_tree(join_tree(new_tree(8), new_tree(3), 2),
                new_tree(4),
                6);
    my_printf("%d, left = %d et right = %d\n", tmp->value, tmp->left->value, tmp->right->value);
    my_printf("SOUS LEFT %d ET SOUS RIGHT %d OF %d\n\n", tmp->left->left->value, tmp->left->right->value, tmp->left->value);
    print_tree(tmp);
    my_printf("NB NODE => %d\n", nb_node_tree(tmp));
    rm_tree(tmp);
    return 0;
}