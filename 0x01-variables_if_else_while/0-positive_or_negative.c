#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Entry point
 * Description: prints prints if a number is positive or negative
 * Return: 0
 */

int main(void)
{

	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;

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
