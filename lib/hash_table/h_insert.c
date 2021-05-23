
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

void ht_insert_item(char *key, char *value, ht_t *ht, int index)
{
    for (int i = 0; i < SIZE; i++) {
        index = (index + i) % SIZE;
        if (check_ht_item(ht->items[index])) {
            ht->items[index] = new_table(key, value);
            return;
        }
    }
    return;
}

int check_key(ht_t *ht, char *key)
{
    for (int i = 0; i < SIZE; i++)
        if (!my_strcmp(key, ht->items[i]->key))
            return i;
    return -1;
}

void ht_insert(ht_t *ht, char *key, char *value)
{
    int index = 0;

    if (check_str(key) || check_str(value) || !my_strncmp("key ", key, 3)) {
        my_printf("KEY IS INVALID!\n");
        return;
    }
    index = hash(key);
    ht_insert_item(key, value, ht, index);
    return;
}