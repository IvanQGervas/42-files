
char *ft_strcapitalize(char *str);

char *ft_strcapitalize(char *str)
{
    int capitalize_next;

    capitalize_next = 1;
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))
        {
            if (capitalize_next == 1)
            {
                /* Se comprueba que la primera letra es un caracter en minuscula y se convierte */
                if (*str >= 'a' && *str <= 'z')
                {
                    *str = *str - ('a' - 'A');
                }
                capitalize_next = 0;
            }
            else
            {
                /* Si el caracter no es el primero, y es un caracter valido y en mayuscula se convierte a minuscula */
                if (*str >= 'A' && *str <= 'Z')
                {
                    *str = (*str + ('a' - 'A'));
                }
            }
        }
        else
        {
            /* En caso de que el caracter no sea una letra o numero */
            capitalize_next = 1;
        }
        str++;
    }

    return str;
}

#include <stdio.h>

int main()
{
    char str[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Entrada:\n %s\n", str);
    ft_strcapitalize(str);

    printf("Salida:\n %s\n", str);

    return 0;
}
