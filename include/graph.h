/*
** EPITECH PROJECT, 2021
** graph
** File description:
** lib
*/

#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "lib.h"

// INIT noeud(sommet)
typedef struct g_node_s
{
    int nb;
    struct g_node_s *next; //Linked list
} g_node_t;

//INIT Liste Adjacente
typedef struct g_adjency_s
{
    int nb;
    g_node_t *begin; //Head of the adjacent list
} g_adjency_t;

//INIT Graph
typedef struct graph_s
{
    my_bool is_oriend; //A <=> B OR A => B
    int nb_vertices; //nb head
    g_adjency_t *tab_neighbours; // list of neighbours
} graph_t;

graph_t *new_graph(int vertices, my_bool is_oriented);
g_node_t *add_node(int x);
void print_graph(graph_t *g);
void rm_graph(graph_t *g);
my_bool check_graph(graph_t *tmp);
void add_links(graph_t *g, int src, int dest); // Create LINKS

#endif /* !GRAPH_H_ */