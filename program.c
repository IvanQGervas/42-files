#include <stdio.h>

// TODO: Revisar normativa sobre la longitud maxima de las funciones

void rush(int x, int y)
{
    int x_index;
    int y_index;

    x_index = 1;
    y_index = 1;
    while (y_index != (y + 1))
    {
        while (x_index != (x + 1))
        {
            // Primera linea
            if (y_index == 1)
            {
                // Primer caracter de la primera linea
                if (x_index == 1)
                {
                    printf("A");
                }

                // Caracteres intermedios de la primera linea
                if (x_index != 1 && x_index != x)
                {
                    printf("B");
                }

                // Caracter final de la primera linea
                if (x_index != 1 && x_index == x)
                {
                    printf("C");
                }
            }

            // Lineas intermedias
            if (y_index != 1 && y_index != y)
            {
                // Primer caracter de las lineas intermedias
                if (x_index == 1)
                {
                    printf("B");
                }

                // Caracteres intermedios de las lineas intermedias
                if (x_index != 1 && x_index != x)
                {
                    printf(" ");
                }

                // Caracter final de las lineas intermedias
                if (x_index != 1 && x_index == x)
                {
                    printf("B");
                }
            }

            // Linea final
            if (y_index != 1 && y_index == y)
            {
                // Primer caracter de la ultima linea
                if (x_index == 1)
                {
                    printf("C");
                }

                // Caracteres intermedios de la ultima linea
                if (x_index != 1 && x_index != x)
                {
                    printf("B");
                }

                // Caracter final de la ultima linea
                if (x_index != 1 && x_index == x)
                {
                    printf("A");
                }
            }

            // Se incrementa el valor del indice X para pintar el siguiente caracter de la misma linea
            x_index++;
        }

        // En caso de ser no ser la ultima linea, se introduce un salto
        if (y != y_index)
        {
            printf("\n");
        }

        // Se reestablece el valor de indice a uno para pintar de nuevo el eje X
        x_index = 1;

        // Se incrementa el valor del indice Y para comenzar a pintar la siguiente linea
        y_index++;
    }
}

int main()
{
    // rush(5, 3);
    // printf("\n--\n");
    // rush(5, 1);
    // printf("\n--\n");
    // rush(1, 1);
    // printf("\n--\n");
    // rush(1, 2);
    // printf("\n--\n");
    // rush(4, 4);
    rush(5, 3);
    printf("\n--\n");
    rush(5, 1);
    printf("\n--\n");
    rush(1, 1);
    printf("\n--\n");
    rush(1, 5);
    printf("\n--\n");
    rush(4, 4);

    return 0;
}
