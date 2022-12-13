#include "main.h"

/**
 * _abs - checks the absolute value
 * @n: contains value to be checked
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);

}
