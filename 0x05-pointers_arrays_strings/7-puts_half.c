#include "main.h"

/**
* rev_string - reverses string a string
* @s: input string
* Description: this prints prints strings
* Return: returns nothing
*/
void puts_half(char *str)
{

int len = 0, n, i;
while (str[len] != '\0')
{
len++;
}  

if (len % 2 == 0)
{
    n = (len) / 2;
}
else
{
    n = (len- 1) / 2;
}
for (i = n; i < len; i++ )
{
    _putchar(str[i]);
} 


_putchar('\n');

}
