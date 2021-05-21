/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** test file
*/

#include "include/project.h"

int main(void)
{
    ht_t *ht = init_ht();
    ht_insert(&ht, "toto");
    ht_insert(&ht, "tata");
    ht_insert(&ht, "titi");
    ht_insert(&ht, "42");
    ht_insert(&ht, "60 credits");
    ht_insert(&ht, "epitech");
    ht_insert(&ht, "shell");
    ht_insert(&ht, "corewar");
    ht_insert(&ht, "rpg");
    ht_insert(&ht, "aa");
    print_table(ht);
    my_printf("\n");
    ht_delete("rpg", &ht->items);
    ht_delete("aa", &ht->items);
    print_table(ht);
    ht_delete_all(&ht);
    return 0;
}