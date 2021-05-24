/*
** EPITECH PROJECT, 2021
** hash_table search
** File description:
** lib
*/

#include "../../include/lib.h"

char *ht_search(char *key, ht_t *ht)
{
    int index = hash(key);

    for (int i = 0; i < SIZE; i++) {
        index = (index + i) % SIZE;
        if (IS_ITEM(ht->items[index]))
            return NULL;
        else if (ht->items[index] == DELETED_NODE)
            continue;
        else if (!my_strcmp(ht->items[index]->key, key))
                return ht->items[index]->value;
    }
    return NULL;
}