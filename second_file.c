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

    size = size_of_world(world);
    return actual_count(size, world);

}

vector_t get_pos(int x, int y)
{
    vector_t pos;

    pos.x = x;
    pos.y = y;
    return pos;
}
