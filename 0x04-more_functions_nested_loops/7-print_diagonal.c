#include "main.h"

/**
*print_diagonal - prints diagonal line
*@n: parameter
*Return: returns nothing
*/
void print_diagonal(int n)
{
int row, col;
if (n > 0)
{
for (row = 0; row < n; row++)
{
for (col = 0; col < row; col++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
