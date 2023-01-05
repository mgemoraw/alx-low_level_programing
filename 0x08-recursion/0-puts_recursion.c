#include "main.h"

/**
* _puts_recursion -FUNCTION RECURSIVE
* @s: character string
* Return: returns nothing
* Author: mgemoraw
*/
void _puts_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(s++);
_putchar('\n');

}
