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

    if (!world || check_format(world))
        return 84;
    size = size_of_world(world);
    return actual_count(size, world);

}
