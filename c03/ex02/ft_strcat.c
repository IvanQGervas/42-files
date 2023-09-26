char *ft_strcat(char *dest, char *src);

char *ft_strcat(char *dest, char *src)
{
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

#include <stdio.h>

int main()
{
    char dest[15] = "Hola";
    char src[10] = " Mundo!";

    ft_strcat(dest, src);

    printf("Cadena concatenada: %s\n", dest);

    return (0);
}