#include <stdio.h>

/**
 * print_times_table - prints time table
 * @n: input parameter
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;
	int sum = 0;
	for (a = 0; a < 1024; a++)
	{
		if (a %5 == 0 || a % 3 == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
}
