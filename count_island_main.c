/*
** EPITECH PROJECT, 2022
** count island
** File description:
** main function
*/

#include "include/my.h"

int check_format(char **world)
{
    if (world[0] == NULL)
        return 1;
    int len = my_strlen(world[0]);

    for (int i = 0; world[i] != NULL; i++)
        if (len != my_strlen(world[i]) || check_line(world[i]))
            return 1;
    return 0;
}

vector_t size_of_world(char **world)
{
    vector_t size;
    int i;

    for (i = 0; world[0][i] != '\0'; i++);
    size.x = i;
    for (i = 0; world[i] != NULL; i++);
    size.y = i;

    return size;
}

void replace_island(vector_t size, char **world, vector_t pos, char c)
{
    world[pos.y][pos.x] = c;
    if ((pos.x < size.x - 1) && world[pos.y][pos.x + 1] == 'X') {
        replace_island(size, world, get_pos(pos.x + 1, pos.y), c);
        }
    if (pos.y < size.y - 1 && world[pos.y + 1][pos.x] == 'X') {
        replace_island(size, world, get_pos(pos.x, pos.y + 1), c);
        }
    if (pos.x > 0 && world[pos.y][pos.x - 1] == 'X') {
        replace_island(size, world, get_pos(pos.x - 1, pos.y), c);
        }
    if (pos.y > 0 && world[pos.y - 1][pos.x] == 'X') {
        replace_island(size, world, get_pos(pos.x, pos.y - 1), c);
        }
}

int count_and_replace(vector_t size, char **world, vector_t pos, int count)
{
    if (world[pos.y][pos.x] == 'X') {
        replace_island(size, world, pos, count + 48);
        return 1;
    }
    return 0;
}

int actual_count(vector_t size, char **world)
{
    int count = 0;
    vector_t pos;

    for (pos.y = 0; pos.y < size.y; pos.y++) {
        for (pos.x = 0; world[pos.y][pos.x] != '\0'; pos.x++)
            count += count_and_replace(size, world, pos, count);
    }
    return count;
}
