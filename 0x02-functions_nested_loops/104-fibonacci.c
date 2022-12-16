#include <stdio.h>

/**
 * main- prints sum of even fibonacci numbers
 * fibonacci sum
 * Return: Always 0.
 *
 * Owner By mgemoraw
 */

int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, c;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		printf("%lu", c);
		if (i != 97)
			printf(", ");
		else
			printf("\n");
		a = b;
		b = c;

	}


	return (0);
}
