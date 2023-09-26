#include <unistd.h>

void ft_putstr(char *str);

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

int main()
{
    char cadena[13] = "Hola, mundo!";

    ft_putstr(cadena);

    return 0;
}
