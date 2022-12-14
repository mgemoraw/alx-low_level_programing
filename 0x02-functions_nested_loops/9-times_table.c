#include "main.h"

/**
 * times_table - prints time table
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;
	int pro;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');

			pro = a * b;

			if (pro <= 9)
			{
				_putchar(' ');
				_putchar('0' + pro);
			}
			else
			{
				_putchar('0' + pro / 10);
				_putchar('0' + pro % 10);
			}
		}
		_putchar('\n');
	}
}
