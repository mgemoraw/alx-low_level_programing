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

	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j ++)
		{
			if(i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar('\n');

	return (0);
}
