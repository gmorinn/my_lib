/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../../include/lib.h"

int file_error(char *file)
{
    int fd = open(file, O_RDONLY);
    if (fd == -1) {
        my_printf("File does not exist.\n");
        return (-1);
    }
    return (fd);
}

char *open_map(char *path)
{
    int fd = open(path, O_RDONLY);
    char *file = NULL;
    struct stat buff;
    if ((fd = file_error(path)) < 0)
        return (NULL);
    stat(path, &buff);
    file = malloc(sizeof(char) * (buff.st_size + 1));
    read(fd, file, buff.st_size);
    file[buff.st_size] = '\0';
    close(fd);
    return (file);
}

void display_tab(char **map)
{
    for (int i = 0; map[i]; i++)
        my_printf("%s\n", map[i]);
}

void fs_open_file(char *path)
{
    char *maptest = open_map(path);
    char **map =  my_split(maptest, ';');
    display_tab(map);
}