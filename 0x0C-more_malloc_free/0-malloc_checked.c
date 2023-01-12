#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
* _putchar - puts the character string to i/o
* @c: input character
* Return: returns charactor to i/o
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _atexit - prints 98
* Return: returns nothing
*/
void _atexit(void)
{
/*
*_putchar('0' + 98 / 10);
*_putchar('0' + 98 % 10);
*_putchar('\n');
*/
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

if (value != 0)
{
exit(98);
}
return (str);
}
