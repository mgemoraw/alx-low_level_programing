#include "main.h"

/**
* _puts_recursion -FUNCTION RECURSIVE
* @s: character string
* Return: returns nothing
* Author: mgemoraw
*/
void _puts_recursion(char *s)
{
int j = 0;
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*(s + j));
j++;
_puts_recursion((char *)(s + j));
}
