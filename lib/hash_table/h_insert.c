/*
** EPITECH PROJECT, 2021
** hash_table insert
** File description:
** lib
*/

#include "../../include/lib.h"

ht_item_t *new_table(char *key, char *value)
{
    ht_item_t *tmp = malloc(sizeof(ht_item_t));
    tmp->key = my_strdup(key);
    tmp->value = my_strdup(value);
    return tmp;
}

void ht_update(char *key, char *value, ht_t *ht)
{
    for (int i = 0; i < ht->size; i++) {
        if (!my_strcmp(key, ht->items[i]->key)) {
            free_string(&ht->items[i]->value);
            ht->items[i]->value = my_strdup(value);
            return;
        }
    }
}

void ht_insert(ht_t *ht, char *key, char *value)
{
    int index = 0;
    ht_item_t *tmp = NULL;

    if (check_str(key) || !my_strncmp("key ", key, 3)) {
        my_printf("KEY IS INVALID!\n");
        return;
    }
    index = hash(key);
    tmp = ht->items[index];
    if (check_ht_item(tmp)) {
        ht->items[index] = new_table(key, value);
        return;
    }
    ht_update(key, value, ht);
    return;
}