#include <stdio.h>

// TODO: Revisar normativa sobre la longitud maxima de las funciones

void print_character_by_position(int x_index, int x, char f_character, char m_character, char e_character)
{
    if (x_index == 1)
    {
        printf("%c", f_character);
    }
    else if (x_index != 1 && x_index != x)
    {
        printf("%c", m_character);
    }
    else if (x_index != 1 && x_index == x)
    {
        printf("%c", e_character);
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
            printf("\n");
        }
        x_index = 1;
        y_index++;
    }
}

int main()
{
    rush(5, 3);
    printf("\n--\n");
    rush(5, 1);
    printf("\n--\n");
    rush(1, 1);
    printf("\n--\n");
    rush(1, 5);
    printf("\n--\n");
    rush(4, 4);
    printf("\n--\n");
    rush(10, 5);

    return 0;
}
