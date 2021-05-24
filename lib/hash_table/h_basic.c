/*
** EPITECH PROJECT, 2021
** hash_table basic
** File description:
** lib
*/

#include "../../include/lib.h"

int hash(char *str)
{
    int lenght = my_strlen(str);
    int hash_value = 0;
    for (int i = 0; i < lenght; i++) {
        hash_value += str[i];
        hash_value = (hash_value * str[i]) % SIZE;
    }
    return hash_value;
}

ht_item_t **init_items(int size)
{
    ht_item_t **tmp = MALLOC(tmp, sizeof(ht_item_t *) * (size + 1));
    for (int i = 0; i < size; i++)
        tmp[i] = NULL;
    return tmp;
}

ht_t *init_ht(void)
{
    ht_t *ht = MALLOC(ht, sizeof(ht_t));
    ht->size = SIZE;
    ht->items = init_items(ht->size);
    return ht;
}

void print_table(ht_t *ht)
{
    for (int i = 0; i < ht->size; i++) {
        ht_item_t *tmp = ht->items[i];
        if (IS_ITEM(tmp))
            continue;
        my_printf("\tID[%d]: ", i);
        if (tmp == DELETED_NODE)
            my_printf("<deleted>\n");
        else
            my_printf("%s = %s\n", tmp->key, tmp->value);
    }
}