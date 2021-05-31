/*
** EPITECH PROJECT, 2021
** rm_str
** File description:
** lib
*/

#include "../../include/lib.h"

void free_string(char **str)
{
    if (check_str((*str)))
        return;
    free((*str));
    (*str) = NULL;
}

void free_tab(char ***tab)
{
    if (check_tab((*tab)))
        return;
    for (int i = 0; !(*tab)[i]; i++)
        free_string(&(*tab)[i]);
    free((*tab));
    (*tab) = NULL;
}

void free_item_ht(ht_item_t **hash_table)
{
    FREE((*hash_table)->value);
    FREE((*hash_table)->key);
    free((*hash_table));
    (*hash_table) = DELETED_NODE;
}