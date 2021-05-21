/*
** EPITECH PROJECT, 2020
** bsprintf
** File description:
** Prototypes of my_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "linked_list.h"
#include "hash_table.h"
#include "printf.h"

typedef int my_bool;
#define true 1
#define false 0
#define EOF '\0'

void my_putchar(char c);
int	my_pow(int nb, int pow);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int getnc(char str);
int my_putstr(char const *str);
int my_strcmp(char *str1, char *str2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
char *my_strdup(char const *src);
int my_getnbr(char *str);
int split_word(char *str, char split);
int lenght_split(char *str, char split);
char **my_split(char *str, char split);
int file_error(char *file);
char *open_map(char *path);
void display_tab(char **map);
void fs_open_file(char *path);
my_bool my_isdigit(char c);
my_bool check_tab(char **tab);
my_bool check_str(char *str);
int count_elem_tab(char **tab);
my_bool my_str_is_digit(char *str);
my_bool check_char(char c);
void free_string(char **str);
void free_tab(char ***tab);
my_bool my_isalpha(char c);
char *my_str_lowcase(char *str);
char up_c(char c);
char *my_str_upcase(char *str);
my_bool my_str_isalpha(char *str);
my_bool is_space(char c);
char *trim(char *str);