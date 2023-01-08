#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main - function prints number of args
* @argc: argument count
* @argv: argument array
* Return: returns 0
* Author: mgemoraw
*/

int digit(char *s);

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
	if (digit(argv[i]) == 1)
	{
		sum += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", sum);
	return (0);
}

/**
* digit - checks for digit
* @s: input string
* Return: returns integer
*/
int digit(char *s)
{
	unsigned int i, re = 0;
	for (i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]))
		{
			re = 1;
		}
		else
		{
			re = 0;
			break;
		}
		
	}
	return (re);

}
