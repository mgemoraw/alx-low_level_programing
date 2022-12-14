#include "main.h"

/**
 * print_times_table - prints time table
 * @n: input parameter
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a;
	int b;
	int pro;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				pro = a * b;

				if (pro <= 9)
				{
					_putchar(' ');
					_putchar('0' + pro);
				}
				else if (pro <= 99)
				{
					_putchar('0' + pro / 10);
					_putchar('0' + pro % 10);
				}
				else
				{

					_putchar('0' + (pro / 10) / 10);
					_putchar('0' + (pro / 10) % 10);
					_putchar('0' + pro % 10);
				}
			}
		_putchar('\n');
	}
	}
}
