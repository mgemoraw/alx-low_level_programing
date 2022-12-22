#include "main.h"

/**
* _strlen - computes length of a string
* @str: input string
* Return: length of a string
*/
int _strlen(char *str)
{
int c = 0;
while (str[c] != '\0')
{
c++;
}
return (c);
}

/**
* string_toupper - changes lower to upper case letter
* @str: input character string
* Return: length of a string
*/
char *string_toupper(char *str)
{
int i = 0;
int len = _strlen(str);

while (i < len)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
else
str[i] += 0;
i++;
}
return (str);
}
