#include <stdio.h>

/**
 * main- prints fibonacci series
 * fibonacci numbers
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}



