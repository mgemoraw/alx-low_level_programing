#include "main.h"

/**
*print_line - prints line
*@n: line length
*Return: returns nothing
*/

void print_line(int n)
{
int num;
if (n > 0)
{
for (num = 0; num < n; num++)
{
_putchar('_');
}
}
_putchar(10);
}
