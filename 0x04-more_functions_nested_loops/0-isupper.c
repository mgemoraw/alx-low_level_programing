#include "main.h"

/* more headers goes there */

/**
 * _isupper - Entry point
 * @c: tested character
 * Return: returns 1 if it is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c < 97)
		return (1);
	else
		return (0);
}
