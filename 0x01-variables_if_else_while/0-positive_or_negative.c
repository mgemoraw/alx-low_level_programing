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
		printf("is negative\n");
	}
	else if (number == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is positive\n");
	}
	return (0);
}
