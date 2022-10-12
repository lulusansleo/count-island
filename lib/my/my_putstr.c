/*
** EPITECH PROJECT, 2022
** Luan BOURBIER
** File description:
** my putstr
*/

int my_putstr(char const *str)
{
    for (int nb = 0; str[nb] != '\0'; nb++)
        my_putchar(str[nb]);
    my_putchar('\n');
    return 0;
}
