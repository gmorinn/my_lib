/*
** EPITECH PROJECT, 2021
** hash_table search
** File description:
** lib
*/

#include "../../include/lib.h"

ht_item_t *ht_search(char *str, ht_t *ht)
{
    int index = hash(str);

    for (int i = 0; i < ht->size; i++) {
        index = (i + index) % ht->size;
        if (check_ht_item((ht->items[index])))
            return NULL;
        if (ht->items[index] == DELETED_NODE)
            continue;
        if (!check_ht_item(ht->items[index])
            && !my_strcmp(ht->items[index]->value, str))
                return ht->items[index];
    }
    return NULL;
}