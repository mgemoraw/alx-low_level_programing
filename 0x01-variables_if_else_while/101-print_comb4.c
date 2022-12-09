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

	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = j; k <= 9; k++)
			{
				if (i != j && j !=k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
						continue;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				else
					continue;
			}
		}
	}
	putchar('\n');

	return (0);
}
