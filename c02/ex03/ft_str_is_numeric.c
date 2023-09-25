int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
    while (*str)
    {
        if ((*str >= '0' && *str <= '9'))
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
    char str1[10] = "424324143";
    char str2[14] = "543523A435534";
    char str3[1] = "";

    printf("str1: %d\n", ft_str_is_numeric(str1));
    printf("str2: %d\n", ft_str_is_numeric(str2));
    printf("str3: %d\n", ft_str_is_numeric(str3));

    return (0);
}