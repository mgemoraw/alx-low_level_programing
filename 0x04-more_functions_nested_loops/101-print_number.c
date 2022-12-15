#include "main.h"

/**
*print_number - prints integer
*@n: input number
*Return:returns nothing
*/
void print_number(int n)
{
unsigned int num;
num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if (num > 9)
{
print_number(n / 10);   /* recursive */
}
_putchar(num  % 10 + '0');
}
