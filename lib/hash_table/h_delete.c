/*
** EPITECH PROJECT, 2021
** hash_table delete
** File description:
** lib
*/

#include "../../include/lib.h"

void ht_delete_all(ht_t **ht)
{
    for (int i = 0; i < SIZE; i++) {
        if (!check_ht_item((*ht)->items[i]) && (*ht)->items[i] != DELETED_NODE)
            ht_delete((*ht)->items[i]->key, &(*ht)->items);
        }
    free((*ht)->items);
    free(*ht);
}

void ht_delete(char *key, ht_item_t ***hash_table)
{
    int index = hash(key);
    ht_item_t *item = NULL;

    for (int i = 0; i < SIZE; i++) {
        index = (i + index) % SIZE;
        if (check_ht_item((*hash_table)[index]))
            return;
        if ((*hash_table)[index] == DELETED_NODE)
            continue;
        if (!check_ht_item((*hash_table)[index]) &&
            !my_strcmp((*hash_table)[index]->key, key)) {
            free_item_ht(&(*hash_table)[index]);
            return;
        }
    }
    return;
}