char *ft_strupcase(char *str);

/* TODO: Pregutnar si el str que hay que devolver es el original o el modificado */
char *ft_strupcase(char *str)
{
    char *str_original = str;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            /* (a es mayor que A en ASCII)
              Al restar a - A obtenemos el número que representa la diferencia entre caracteres en minuscula y mayuscula.
              Al restar esa diferencia del caracter actual del bucle se obtiene su igual en mayuscula.
            */
            *str = *str - ('a' - 'A');
        }
        str++;
    }

    return str_original;
}

#include <stdio.h>

int main(void)
{
    char str[8] = "Testing";

    printf("Cadena original: %s\n", str);

    char *result = ft_strupcase(str);

    printf("Cadena en mayusculas: %s\n", result);

    return (0);
}
