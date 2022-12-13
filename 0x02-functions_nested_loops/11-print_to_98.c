#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints every minute
 * @n: input parameter
 * Return : Always 0.
 */
void print_to_98(int n)
{
	int a = n;

	if (n <= 98)
	{
		for(a = n; a <= 98; a++)
		{
			if(a != 98)
				printf("%d, ", a);
			else
				printf("%d", a);
		}
	}
	else
	{
		for(a = n; a >= 98; a--)
		{
			if(a != 98)
				printf("%d, ", a);
			else
				printf("%d", a);
		}
	}

}
