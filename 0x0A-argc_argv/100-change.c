#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
cents = atoi(argv[1]);

if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
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
return (0);

}
