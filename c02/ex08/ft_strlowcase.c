char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str)
{
    char *str_original = str;

    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            /* (a es mayor que A en ASCII)
              Al restar a - A obtenemos el número que representa la diferencia entre caracteres en minuscula y mayuscula.
              Al sumar esa diferencia del caracter actual del bucle se obtiene su igual en minuscula.
            */
            *str = (*str + ('a' - 'A'));
        }
        str++;
    }

    return str_original;
}

#include <stdio.h>

int main(void)
{
    char str[8] = "tESTing";

    printf("Cadena original: %s\n", str);

    char *result = ft_strlowcase(str);

    printf("Cadena en minuscula: %s\n", result);

    return (0);
}