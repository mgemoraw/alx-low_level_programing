#include "main.h"

/**
* _print_rev_recursion -FUNCTION RECURSIVE
* @s: character string
* Return: returns nothing
* Author: mgemoraw
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*(s));

}
return;
}
