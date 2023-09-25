int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
    char str1[11] = "HelloWorld";
    char str2[17] = "ABCASDASDASDSAD1";
    char str3[1] = "";

    printf("str1: %d\n", ft_str_is_alpha(str1));
    printf("str2: %d\n", ft_str_is_alpha(str2));
    printf("str3: %d\n", ft_str_is_alpha(str3));

    return (0);
}