#include "main.h"

/**
 * _isalpha - checks alphabet characters
 * @n: contains value to be checked
 * Return: Always 0.
 */

int print_sign(int n)
{
	int ans = -1;
	if (n > 0)
	{
		_putchar('+');
		ans = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		ans = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		ans = -1;
	}
	return (ans);

}
