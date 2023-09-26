int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }

    return count;
}

#include <stdio.h>

int main(void)
{
    char str[5] = "Hola";

    int result = ft_strlen(str);

    printf("Resultado: %d\n", result);

    return (0);
}
