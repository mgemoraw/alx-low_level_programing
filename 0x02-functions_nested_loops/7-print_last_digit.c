#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: contains value to be checked
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -1 * n;
	}
	
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
