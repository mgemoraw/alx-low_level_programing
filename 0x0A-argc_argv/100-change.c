#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
/**
* main - function prints number of args
* @argc: argument count
* @argv: argument array
* Return: returns 0
* Author: mgemoraw
*/

int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc == 2 && digit(argv[1]) == 1)
{
cents = atoi(argv[1]);
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue;
}
cents--;
}
printf("%d\n", coins);
}
else
{
printf("Error\n");
return (1);
}
return (0);

}
