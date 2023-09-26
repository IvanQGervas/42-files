
char *ft_strcpy(char *dest, const char *src);

char *ft_strcpy(char *dest, const char *src)
{
    /* Se iteran todos los caracteres de src */
    while (*src != '\0')
    {
        /* Por cada iteración el caracter src es guardado en la misma posición en dest */
        *dest = *src;
        dest++;
        src++;
    }

    /* Como ultimo caracter a dest se le añade el final de la cadena */
    *dest = '\0';

    return dest;
}

#include <stdio.h>

int main()
{
    char src[16] = "Texto de prueba";
    char dest[16];

    ft_strcpy(dest, src);

    printf("Cadena destino: %s\n", dest);

    return 0;
}
