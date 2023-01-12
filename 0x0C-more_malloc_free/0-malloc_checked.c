#include "main.h"
#include <stdlib.h>
#include "../_string.h"
/**
* _atexit - prints 98
* Return: returns nothing
*/
void _atexit(void)
{
/**
*_putchar('0' + 98 / 10);
*_putchar('0' + 98 % 10);
*_putchar('\n');
*/
exit(98);
return;
}

/**
* malloc_checked - equivalent to strncat
* @b: size of string
* Return: returns nothing
* Author: mgemoraw
*/
void *malloc_checked(unsigned int b)
{
void *str;
int value;
str = malloc(b);

value = atexit(_atexit);

if (!str)
{
exit(1);
}
return (str);
}
