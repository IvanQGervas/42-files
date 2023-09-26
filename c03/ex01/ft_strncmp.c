
int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int index;

    index = 0;
    while (index != n)
    {
        if (*s1 != *s2)
        {
            return (*s1 > *s2) ? 1 : -1;
        }
        s1++;
        s2++;
        index++;
    }

    return (0);
}

#include <stdio.h>

int main(void)
{
    char s1[50] = "Cadena 0-";
    char s2[50] = "Cadena 0-";

    int result = ft_strncmp(s1, s2, 12);

    printf("Resultado: %i\n", result);

    return (0);
}
