void ft_print_memory(char *str);

void ft_print_memory(char *str)
{
    while (*str)
    {
        if (*str >= 32 && *str <= 126)
        {
            /* Si el carácter es imprimible*/
            write(1, str, 1);
        }
        else
        {
            /* Si el carácter no es imprimible, se muestra en formato hexadecimal */
            /* Se descompone el caracteren sus digitos hexadecimales desplazando sus bits y utilizando una mascara binaria */
            unsigned char high = *str >> 4;
            unsigned char low = *str & 0x0F;

            /* Se convierten los digitos hexadecimales a caracteres */
            char hex_high = (high < 10) ? ('0' + high) : ('A' + high - 10);
            char hex_low = (low < 10) ? ('0' + low) : ('A' + low - 10);
            write(1, "\\", 1);
            write(1, &hex_high, 1);
            write(1, &hex_low, 1);
        }
        str++;
    }
}

int main(void)
{
    return 0;
}
