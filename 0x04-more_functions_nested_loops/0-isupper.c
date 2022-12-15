#include "main.h"

/* more headers goes there */

/**
 * _isupper - Entry point
 * @c: input character
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c < 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
