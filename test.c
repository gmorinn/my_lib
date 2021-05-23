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
    ht_insert(ht, "key 1", "toto");
    ht_insert(ht, "key 2", "ee");
    ht_insert(ht, "key 3", "titi");
    ht_insert(ht, "key 4", "42");
    ht_insert(ht, "key 5", "60 credits");
    ht_insert(ht, "key 6", "epitech");
    ht_insert(ht, "key 7", "shell");
    ht_insert(ht, "key 8", "corewar");
    ht_insert(ht, "key 9", "rpg");
    ht_insert(ht, "key 10", "cssst");
    ht_insert(ht, "key 520", "ffghj rtyu tyu");
    print_table(ht);
    my_printf("\n");
    // ht_insert(ht, "key 9", "tek 2");
    char *tmp = ht_search("key 3", ht);
    if (tmp != NULL) my_putstr(tmp);
    print_table(ht);
    ht_delete_all(&ht);
    return 0;
}