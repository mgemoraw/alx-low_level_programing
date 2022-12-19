#include "main.h"
/**
* print_rev - prints a string
* @s: input string
* Description: this prints prints strings
* Return: returns nothing
*/

void print_rev(char *s)
{

int len = 0, c;
for (c = 0; ; c++)
{
if (s[c] != '\0')
{
len += 1;
}
else
{
break;
}
}

/*  reversing the order of string */
while (len >= 0)
{
_putchar(s[len]);
len -= 1;
}
_putchar('\n');
}
