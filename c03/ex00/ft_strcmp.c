int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    /* Mientras ninguno de los dos termine */
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return (*s1 > *s2) ? 1 : -1;
        }
        s1++;
        s2++;
    }

    if (*s1 == '\0' && *s2 == '\0')
    {
        return 0;
    }
    else
    {
        return (*s1 > *s2) ? 1 : -1;
    }
}

#include <stdio.h>

int main(void)
{
    char s1[50] = "Cadena 1-";
    char s2[50] = "Cadena 0-";

    int result = ft_strcmp(s1, s2);

    printf("Resultado: %i\n", result);

    return (0);
}
