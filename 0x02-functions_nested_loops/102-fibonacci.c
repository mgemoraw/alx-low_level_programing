#include <stdio.h>

/**
 * main- prints fibonacci series
 * @n: input parameter for function fibonacci
 * fib: function returns fibonacci number
 * Return: Always 0.
 */

int fib(int n);

int main(void)
{
	long int f;
	int a;

	for (a = 0; a < 50; a++)
	{
		f = fib(a);
		printf("%d, ", f);
	}
	printf("%d", fib(50));

	return (0);
}

int fib(int n)
{
	if (n <= 1)
		return n;
	return (fib(n - 1)) + fib(n - 2);
}


