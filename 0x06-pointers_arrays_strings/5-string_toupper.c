#include "main.h"

/**
* string_toupper - changes lower to upper case letter
* @str: input character string
* Return: length of a string
*/
char *string_toupper(char *str)
{
int i = 0;

while (str[i] >= 65 && str[i] <= 122)
{
if (str[i] >= 97)
{
str[i] -= 32;
}
else
str[i] += 0;
i++;
}
return (str);
}
