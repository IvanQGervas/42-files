char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int index;

    index = 0;
    while (index != n)
    {
        if (*src != '\0')
        {
            *dest = *src;
        }
        else
        {
            *dest = '\0';
        }
        dest++;
        src++;
        index++;
    }

    return dest;
}

#include <stdio.h>

int main()
{
    char src[16] = "Texto de prueba";
    char dest[50];

    ft_strncpy(dest, src, 14);

    printf("Cadena destino: %s\n", dest);

    return 0;
}
