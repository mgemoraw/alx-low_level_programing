#include <stdio.h>

/**
 * main- prints sum of even fibonacci numbers
 * fibonacci sum
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, c;
	unsigned long int sum = 0;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
	
		if (c % 2 == 0 &&  c < 4000000)
		{
			sum += c;
		}

		a = b;
		b = c;
	}

	printf("%lu\n", sum);

	return (0);
}



