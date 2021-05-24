/*
** EPITECH PROJECT, 2021
** tree_print
** File description:
** lib
*/

#include "../../include/lib.h"

void print_tree(tree_t *tr)
{
    if (!tr)
        return;
    if (tr->parent)
        my_printf("Parent: %d => %d\n", tr->parent->value, tr->value);
    else
        my_printf("%d\n", tr->value);
    if (tr->left)
        print_tree(tr->left);
    if (tr->right)
        print_tree(tr->right);
}
