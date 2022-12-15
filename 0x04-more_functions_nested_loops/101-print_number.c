#include "main.h"

/**
*print_number - prints integer
*@n: input number
*Return:returns nothing
*/
void print_number(int n)
{
unsigned int num = n;
unsigned int c = 1;
int i = 0;
if (n > 9)
{
    while (num > 9)
    {
        num = n / 10;
        c *= 10;
    }


while (n > 9)
{
    _putchar(n / c + '0');
    n  = n / c;
    c = c / 10;
}
_putchar(n % 10 + '0');
}
else
{
    _putchar(n % 10 + '0');
}

_putchar('\n');
}