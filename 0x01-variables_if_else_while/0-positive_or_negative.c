#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Entry point
 * Description: prints "\"Programming is like building a multilingual puzzle"
 * Return: 0
 */

int main(void)
{
	srand(time(0));
	int number = rand() - RAND_MAX / 2;

	if (number < 0)
	{
		printf("%d is negative\n", number);
	}
	else if (number == 0)
	{
		printf("%d is zero\n", number);
	}
	else
	{
		printf("%d is positive\n", number);
	}
	return (0);
}
