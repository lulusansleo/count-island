/*
** EPITECH PROJECT, 2022
** strncpy
** File description:
** only file
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    if (n > my_strlen(src))
        dest[n] = '\0';
    return dest;
}
