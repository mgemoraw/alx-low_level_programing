#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @number: contains value to be checked
 * Return: Always 0.
 */

int print_last_digit(int number)
{
	int last;

	if (number < 0)
	{
		last = (-1 * number % 10);
	}
	else
	{
		last = (number % 10);
	}

	_putchar(last + '0');
	return (last);
}
