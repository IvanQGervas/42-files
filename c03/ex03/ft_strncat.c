char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int index;

    while (*dest != '\0')
    {
        dest++;
    }

    index = 0;
    while (*src != '\0' && index != nb)
    {
        *dest = *src;
        dest++;
        src++;
        index++;
    }

    *dest = '\0';

    return dest;
}

#include <stdio.h>

int main()
{
    char dest[15] = "Hola";
    char src[10] = " Mundo!";

    ft_strncat(dest, src, 5);

    printf("Cadena concatenada: %s\n", dest);

    return (0);
}