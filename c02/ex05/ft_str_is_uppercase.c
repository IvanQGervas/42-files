int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z'))
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
    char str1[18] = "SDFASDFSDFA";
    char str2[18] = "sdaASDFSDFDFfasfD";
    char str3[1] = "";

    printf("str1: %d\n", ft_str_is_uppercase(str1));
    printf("str2: %d\n", ft_str_is_uppercase(str2));
    printf("str3: %d\n", ft_str_is_uppercase(str3));

    return (0);
}