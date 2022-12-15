#include "main.h"
/**
*print_square - prints squares
*@size: size of a triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        for (j = size; j >= i; j--)
        {
            _putchar(' ');
        }

        for (k = 0; k <= i; k++)
        {
            _putchar('#');
        }
        _putchar('\n');

    }
}