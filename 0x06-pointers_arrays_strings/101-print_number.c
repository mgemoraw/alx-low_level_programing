#include "main.h"

/**
* print_number - prints a number
* @num: input integer
* Reteurn: returns Nothing
*/
void print_number(int num)
{
unsigned int n;
if (num < 0)
{
n = -num;
_putchar('-');
}
else
{
n = num;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}