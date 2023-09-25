int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z'))
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
    char str1[10] = "fdasfdsfa";
    char str2[10] = "sdafasfD";
    char str3[1] = "";

    printf("str1: %d\n", ft_str_is_lowercase(str1));
    printf("str2: %d\n", ft_str_is_lowercase(str2));
    printf("str3: %d\n", ft_str_is_lowercase(str3));

    return (0);
}