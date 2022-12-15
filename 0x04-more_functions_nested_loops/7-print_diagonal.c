#include "main.h"

/**
*print_diagonal - prints diagonal line
*@n: parameter
*Return: returns nothing
*/

void print_diagonal(int n)
{
int num1, num2;
if (n > 0)
{
for (num1 = 0; num1 < n; num1++)
{
for (num2 = 0; num2 < num1; num1++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar(10);
}
