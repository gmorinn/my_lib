/*
** EPITECH PROJECT, 2021
** hash_table insert
** File description:
** lib
*/

#include "../../include/lib.h"

ht_item_t *new_table(char *value)
{
    ht_item_t *tmp = malloc(sizeof(ht_item_t));
    tmp->str = my_strdup(value);
    return tmp;
}

void ht_insert(ht_t **ht, char *value)
{
    int index = 0;

    if (check_str(value))
        return;
    index = hash(value);
    for (int i = 0; i < (*ht)->size; i++) {
        index = (i + index) % (*ht)->size;
        if (check_ht_item((*ht)->items[index])) {
            (*ht)->items[index] = new_table(value);
            return;
        }
    }
    return;
}