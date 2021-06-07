/*
** EPITECH PROJECT, 2021
** tree_basic
** File description:
** lib
*/

#include "../../include/lib.h"

tree_t *new_tree(int x)
{
    tree_t *tr = MALLOC(tr, sizeof(*tr));
    tr->value = x;
    tr->right = NULL;
    tr->left = NULL;
    tr->parent = NULL;
    return tr;
}

void rm_tree(tree_t *tr)
{
    if (!tr)
        return;
    rm_tree(tr->right);
    rm_tree(tr->left);
    FREE(tr);
}

int nb_node_tree(tree_t *tr)
{
    if (!tr)
        return 0;
    return (nb_node_tree(tr->left) + nb_node_tree(tr->right) + 1);
}