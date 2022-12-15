#include "main.h"

/* more headers goes there */

/**
 * print_numbers - prints numbers 0 to 9
 * Return: no returns
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
