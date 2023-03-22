#include "main.h"
/**
 * _strlen - returns length of the string
 * @s: input string
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		len++;

	return (len);
}

