#include "main.h"

/**
* puts2 - prints a string
* @str: input string
* Description: this prints prints strings
* Return: returns nothing
*/
void puts2(char *str)
{
int c = 0;

while (str[c] != '\0')
{
if (c % 2 == 0)
_putchar(str[c]);
c += 1;
}
_putchar('\n');

}
