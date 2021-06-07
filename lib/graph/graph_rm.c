/*
** EPITECH PROJECT, 2021
** graph rm
** File description:
** lib
*/

#include "../../include/lib.h"

void rm_graph(graph_t *g)
{
    g_node_t *node;
    g_node_t *tmp;

    if (check_graph(g))
        return;
    if (g->tab_neighbours) {
        for (int i = 1; i < g->nb_vertices + 1; i++) {
            node = g->tab_neighbours[i - 1].begin;
            while (node != NULL) {
                tmp = node;
                node = node->next;
                FREE(tmp);
            }
        }
        FREE(g->tab_neighbours);
    }
    FREE(g);
}