char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
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

    return str;
}

#include <stdio.h>

int main(void)
{
    char str[8] = "Testing";

    printf("Cadena original: %s\n", str);

    ft_strupcase(str);

    printf("Cadena en mayusculas: %s\n", str);

    return (0);
}
