#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: prints  alphabets using putchar
 * Return: 0
 */

int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
