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
* cap_string - changes lower to upper case letter
* @str: input character string
* Return: length of a string
*/
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
	{
	while (!(str[i] >= 'a' && str[i] <= 'z'))
	i++;

	if (str[i - 1] == ' ' ||
	str[i - 1] == '\t' ||
	str[i - 1] == '\n' ||
	str[i - 1] == ',' ||
	str[i - 1] == ';' ||
	str[i - 1] == '.' ||
	str[i - 1] == '!' ||
	str[i - 1] == '?' ||
	str[i - 1] == '"' ||
	str[i - 1] == '(' ||
	str[i - 1] == ')' ||
	str[i - 1] == '{' ||
	str[i - 1] == '}')
	str[i] -= 32;
	}
	return (str);
}
