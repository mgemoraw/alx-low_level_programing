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
int i = 0, j;
char *sep = " \t\n,;.!?\"'(){}";
while (str[i] != '\0')
	{
	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] -= 32;
	}
	i++;
	for (j = 0; sep[j] != '\0'; j++)
	{
		if (str[i] == sep[j])
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	}
	}
	return (str);
}
