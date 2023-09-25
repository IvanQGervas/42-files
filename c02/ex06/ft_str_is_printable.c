int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        /* Valores imprimibles ASCII */
        if ((*str >= 32 && *str <= 126))
        {
            str++;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

#include <stdio.h>

int main(void)
{
    char str1[14] = "Hello, World!";
    char str2[29] = "Some\nNon-Printable\x07Characters";
    char str3[1] = "";

    printf("str1: %d\n", ft_str_is_printable(str1));
    printf("str2: %d\n", ft_str_is_printable(str2));
    printf("str3: %d\n", ft_str_is_printable(str3));

    return (0);
}