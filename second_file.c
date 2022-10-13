/*
** EPITECH PROJECT, 2022
** count_island
** File description:
** second file
*/

#include "include/my.h"

int count_island(char **world)
{
    vector_t size;

    if (world == NULL)
        return 84;
    if (check_format(world))
        return 84;
    size = size_of_world(world);
    return actual_count(size, world);
}

int check_line(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'X' && str[i] != '.')
            return 1;
    }
    return 0;
}

vector_t get_pos(int x, int y)
{
    vector_t pos;

    pos.x = x;
    pos.y = y;
    return pos;
}
