/*
** EPITECH PROJECT, 2021
** graph
** File description:
** lib
*/

#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "lib.h"


typedef struct g_node_s
{
    int nb;
    struct g_node_s *next;
} g_node_t;

typedef struct g_adjency_s
{
    int nb;
    g_node_t *begin;
} g_adjency_t;

typedef struct graph_s
{
    my_bool is_oriend;
    int nb_vertices;
    g_adjency_t *tab_neighbours;
} graph_t;

graph_t *new_graph(int vertices, my_bool is_oriented);
g_node_t *add_node(int x);
void print_graph(graph_t *g);
void rm_graph(graph_t *g);
my_bool check_graph(graph_t *tmp);
void add_links(graph_t *g, int src, int dest);

#endif /* !GRAPH_H_ */