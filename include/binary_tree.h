/*
** EPITECH PROJECT, 2021
** binary_tree
** File description:
** lib
*/

#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

#include "lib.h"

typedef struct tree_s tree_t;
struct tree_s
{
    int value;
    tree_t *parent;
    tree_t *left;
    tree_t *right;
};

tree_t *new_tree(int x);
tree_t *join_tree(tree_t *left, tree_t *right, int value);
void rm_tree(tree_t *tr);
int nb_node_tree(tree_t *tr);
void print_tree(tree_t *tr);

#endif /* !_BINARY_TREE_H_ */
