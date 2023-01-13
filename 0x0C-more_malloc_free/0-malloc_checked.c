#include "main.h"
#include <stdlib.h>

/**
* _atexit - prints 98
* Return: returns nothing
*/
void _atexit(void)
{
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

str = malloc(b);

if (str == NULL)
{
_atexit();
}

return (str);
}
