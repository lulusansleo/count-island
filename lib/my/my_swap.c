/*
** EPITECH PROJECT, 2022
** Luan BOURBIER
** File description:
** my swap
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
