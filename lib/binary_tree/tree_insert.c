/*
** EPITECH PROJECT, 2021
** tree_insert
** File description:
** lib
*/

#include "../../include/lib.h"

tree_t *join_tree(tree_t *left, tree_t *right, int value)
{
    tree_t *tr = new_tree(value);
    tr->left = left;
    tr->right = right;

    if (left)
        left->parent = tr;
    if (right)
        right->parent = tr;
    return tr;
}