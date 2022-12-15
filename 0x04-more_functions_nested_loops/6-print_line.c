#include "main.h"

/**
*print_line - prints line
*@n: line length
*Return: returns nothing
*/

void print_line(int n)
{
int num;
for (num = 0; num < n; num++)
{
_putchar('_' + '0');
}
_putchar(10);
}
