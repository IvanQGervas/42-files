unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int src_len = 0;
    unsigned int i = 0;

    /* Calcular la longitud de src sin modficarlo */
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    /* Copia src a dest hasta que size (maximo) - 1 o src termine */
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Agregar un carácter nulo en dest si queda espacio */
    if (i < size)
    {
        dest[i] = '\0';
    }

    return src_len;
}

#include <stdio.h>

int main(void)
{
    char dest[20];
    char src[8] = "Ejemplo";

    unsigned int copied = ft_strlcpy(dest, src, 8);

    printf("Caracteres copiados: %u\n", copied);
    printf("Cambio dest: %s\n", dest);

    return (0);
}
