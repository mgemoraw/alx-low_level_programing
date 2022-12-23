#include "main.h"

/**
* rot13 - encodes a string using rot13
* @str: input string array
* Return: returns character array
*/

char *rot13(char *str)
{
int i, j;
char *na = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *ma = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; na[j] != '\0'; j++)
{
if (str[i] == na[j])
{
str[i] = ma[j];
break;
}
}
}
return (str);
}
