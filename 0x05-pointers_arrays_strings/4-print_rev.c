#include "main.h"
#include <string.h>
/**
* _strlen - returns length of string
* print_rev - prints a string
* @s: input string
* Description: this prints prints strings
* Return: returns nothing
*/

int _strlen(char *s)
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
return (len);
}

/*  reversing the order of string */
void print_rev(char *s)
{
int len = _strlen(s) - 1;

while (len >= 0)
{
_putchar(s[len]);
len -= 1;
}
_putchar('\n');

}
