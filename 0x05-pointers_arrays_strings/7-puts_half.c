#include "main.h"
/**
* puts_half - prints half string of a string
* @str: input string
* Description: this prints prints strings
* Return: returns nothing
*/
void puts_half(char *str)
{

int len = 0, n, i = 0;
while (str[len] != '\0')
{
len++;
}

/* checking length */

if (len % 2 == 0)
{
n = (len / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
}

else if (len % 2 != 0)
{
n = (len - 1) / 2;
for (i = n + 1; str[i] != '\0'; i++)
_putchar(str[i]);
}

_putchar('\n');

}
