#include "main.h"

/* more headers goes there */

/**
 * print_numbers - prints numbers 0 to 9
 * Return: no returns
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num );
	}
	_putchar(10);
}
