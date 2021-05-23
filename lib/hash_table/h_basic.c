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
    ht_item_t **tmp = malloc(sizeof(ht_item_t *) * (size + 1));
    for (int i = 0; i < size; i++)
        tmp[i] = NULL;
    return tmp;
}

ht_t *init_ht(void)
{
    ht_t *ht = malloc(sizeof(ht_t));
    ht->size = SIZE;
    ht->items = init_items(ht->size);
    return ht;
}

void print_table(ht_t *ht)
{
    for (int i = 0; i < ht->size; i++) {
        if (check_ht_item(ht->items[i]))
            continue;
        else if (ht->items[i] == DELETED_NODE)
            my_printf("\t%d\t-----<deleted>\n", i);
        else
            my_printf("\t%d = %s\n", i, ht->items[i]->value);
    }
}