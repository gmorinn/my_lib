/*
** EPITECH PROJECT, 2021
** hash_table
** File description:
** lib
*/

#ifndef HASH_TABLE_H_
#define HASH_TABLE_H_

#include "lib.h"

#define DELETED_NODE    (ht_item_t *)(0xFFFFFFFFFFFF)
#define SIZE 10

typedef struct ht_item_s
{
    char *str;
    char *key;
} ht_item_t;

typedef struct ht_s
{
    int size;
    int count;
    ht_item_t **items;
} ht_t;

int hash(char *str);
ht_item_t *new_table(char *value);
void ht_insert(ht_t **ht, char *value);
ht_t *init_ht(void);
ht_item_t **init_items(int size);
ht_item_t *new_item(char *value, int key);
void ht_delete_all(ht_t **ht);
void ht_delete(char *str, ht_item_t ***hash_table);
ht_item_t *ht_search(char *str, ht_t *ht);
void print_table(ht_t *ht);
void free_item_ht(ht_item_t **hash_table);
ht_t *ht_new();
my_bool check_ht_item(ht_item_t *item);

#endif /* !HASH_TABLE_H_ */