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
        if (!IS_ITEM((*ht)->items[i]) && (*ht)->items[i] != DELETED_NODE)
            ht_delete((*ht)->items[i]->key, &(*ht)->items);
        }
    FREE((*ht)->items);
    FREE(*ht);
    (*ht) = NULL;
}

void ht_delete(char *key, ht_item_t ***hash_table)
{
    int index = hash(key);

    for (int i = 0; i < SIZE; i++) {
        index = (i + index) % SIZE;
        if (IS_ITEM((*hash_table)[index]))
            continue;
        else if ((*hash_table)[index] == DELETED_NODE)
            continue;
        else if (!my_strcmp((*hash_table)[index]->key, key)) {
            free_item_ht(&(*hash_table)[index]);
            return;
        }
    }
    return;
}