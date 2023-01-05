#include "main.h"

/**
* _print_rev_recursion -FUNCTION RECURSIVE
* @s: character string
* Return: returns nothing
* Author: mgemoraw
*/
void _print_rev_recursion(char *s)
{
int i, j = -1;
for (i = 0; *(s + i) != '\0'; i++)
{
_putchar(s[j]);
j--;
}
_putchar('\n');

}
