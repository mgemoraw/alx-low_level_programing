#include <stdio.h>

/**
 * main- prints time table
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int sum = 0;

	for (a = 0; a < 1024; a++)
		if ((a % 5 == 0) || (a % 3 == 0))
			sum += a;
	printf("%d\n", sum);

	return (0);
}
