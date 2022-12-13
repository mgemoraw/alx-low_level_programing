#include "main.h"

/**
 * _isalpha - checks alphabet characters
 * @c: contains value to be checked
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

}
