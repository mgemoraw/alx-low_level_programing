#include <stdio.h>

/**
 * main- prints fibonacci series
 * Return: Always 0.
 */

int fibonacci(int n);
int main(void)
{
	int fib;
	int a;

	for (a = 0; a < 50; a++)
	{
		fib = fibonacci(0);
		printf("%d, ", fib);
	}
	printf("%d", fibonacci(50));

	return (0);
}

int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return (fibonacci(n - 1)) + fibonacci(n - 2);
}
