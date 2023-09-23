#include "ft_putchar.c"

void print_character_by_position(int x_index, int x, char f_character, char m_character, char e_character)
{
    if (x_index == 1)
    {
        ft_putchar(f_character);
    }
    else if (x_index != 1 && x_index != x)
    {
        ft_putchar(m_character);
    }
    else if (x_index != 1 && x_index == x)
    {
        ft_putchar(e_character);
    }
}

void print_line(int x_index, int y_index, int x, int y)
{
    if (y_index == 1)
    {
        print_character_by_position(x_index, x, 'A', 'B', 'C'); /* Primera linea */
    }
    else if (y_index != 1 && y_index != y)
    {
        print_character_by_position(x_index, x, 'B', ' ', 'B'); /* Medias lineas */
    }
    else if (y_index != 1 && y_index == y)
    {
        print_character_by_position(x_index, x, 'C', 'B', 'A'); /* Ultima linea */
    }
}

void rush(int x, int y)
{
    int x_index = 1;
    int y_index = 1;

    while (y_index != (y + 1))
    {
        while (x_index != (x + 1))
        {
            print_line(x_index, y_index, x, y);
            x_index++;
        }
        if (y != y_index) /* Si no es la ultima linea, se añade un salto */
        {
            ft_putchar('\n');
        }
        x_index = 1;
        y_index++;
    }
}