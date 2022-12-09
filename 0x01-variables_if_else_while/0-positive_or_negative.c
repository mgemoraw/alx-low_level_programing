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
	int number = rand();

	if (number < 0)
	{
		printf("%d is negative", number);
	}
	else if (number == 0)
	{
		printf("%d is zero", number);
	}
	else
	{
		printf("%d is positive", number);
	}
	return (0);
}
