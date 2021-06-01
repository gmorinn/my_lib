/*
** EPITECH PROJECT, 2021
** graph rm
** File description:
** lib
*/

#include "../../include/lib.h"

void print_graph(graph_t *g)
{
    g_node_t *tmp;

    for (int i = 1; i < g->nb_vertices + 1; i++) {
        tmp = g->tab_neighbours[i - 1].begin;
        my_printf("[%d]: ", i);
        while (tmp != NULL) {
            my_printf("%d, ", tmp->nb);
            tmp = tmp->next;
        }
        my_printf("NULL\n");
    }
}