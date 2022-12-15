#include "main.h"

/**
*print_most_numbers - prints most numbers
*Return: nothing
*/

void print_most_numbers(void)
{
int num;
for (num = 48; num < 58; num++)
{
if (num != 2 || num != 4)
{
_putchar(num);
}
}
_putchar(10);
}
