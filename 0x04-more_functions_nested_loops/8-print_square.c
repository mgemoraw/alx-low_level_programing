#include "main.h"

/**
*print_square - prints square line
*@size: parameter size
*Return: returns nothing
*/

void print_square(int size)
{
    int num1, num2;
    if (size > 0)
    {
        for (num1 = 0; num1 < size; num1++)
        {
            for (num2 = 0; num2 < size; num2++)
            {
                _putchar('#' + '0');
            }
            _putchar('\n');
        }
    }
    _putchar('\n');
}
