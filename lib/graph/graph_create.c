/*
** EPITECH PROJECT, 2021
** graph create
** File description:
** lib
*/

#include "../../include/lib.h"

graph_t *new_graph(int vertices, my_bool is_oriented)
{
    graph_t *element;

    element = malloc(sizeof(graph_t));
    element->is_oriend = is_oriented;
    element->nb_vertices = vertices;
    element->tab_neighbours = malloc(vertices * sizeof(g_adjency_t));
    for (int i = 1; i < vertices + 1; i++)
        element->tab_neighbours[i - 1].begin = NULL;
    return element;
}

g_node_t *add_node(int x)
{
    g_node_t *tmp = MALLOC(tmp, sizeof(g_node_t));
    tmp->nb = x;
    tmp->next = NULL;
    return tmp;
}

my_bool check_graph(graph_t *tmp)
{
    if (tmp == NULL)
        return (true);
    return (false);
}

void add_links(graph_t *g, int src, int dest)
{
    g_node_t *node;

    if (src > g->nb_vertices || dest > g->nb_vertices)
        return;
    if (src <= 0 || dest <= 0)
        return;
    node = add_node(dest);
    node->next = g->tab_neighbours[src - 1].begin;
    g->tab_neighbours[src - 1].begin = node;
    if (!g->is_oriend) {
        node = add_node(src);
        node->next = g->tab_neighbours[dest - 1].begin;
        g->tab_neighbours[dest - 1].begin = node;
    }
}