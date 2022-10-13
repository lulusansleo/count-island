/*
** EPITECH PROJECT, 2022
** count island
** File description:
** myh
*/

#ifndef myh
    #define myh

    #include <stddef.h>
    #include <stdio.h>

    typedef struct size {
        int x;
        int y;
    } vector_t;

    int count_island(char **world);
    int check_format(char **world);
    vector_t size_of_world(char **world);
    void replace_island(vector_t size, char **world, vector_t pos, char c);
    int count_and_replace(vector_t size, char **world, vector_t pos, int count);
    int actual_count(vector_t size, char **world);
    int my_strlen(char *str);
    vector_t get_pos(int x, int y);
    int check_line(char *str);

#endif /* !myh */
