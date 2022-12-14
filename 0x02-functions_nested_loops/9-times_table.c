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
		for (b = 0; b < 10; b++)
		{
			pro = a * b;

			if (pro / 10 == 0)
			{
				_putchar('0' + pro % 10 );
				if ( b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					continue;
			}
			else if (pro / 10 > 0)
			{
				_putchar('0' + pro / 10);
				_putchar('0' + pro % 10);
				if (b < 9)
					_putchar(',');
				else
					continue;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
