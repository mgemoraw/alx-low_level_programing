#include <stdio.h>
#include <stdlib.h>

/**
* main - function prints number of args
* @argc: argument count
* @argv: argument array
* Return: returns 0
* Author: mgemoraw
*/
int rf(int x);

int main(int argc, char *argv[])
{
int sum = 0;

if(atoi(argv[1]) && atoi(argv[2]))
{
sum = atoi(argv[1]) + atoi(argv[2]);
printf("%d\n", mul);
}
else
{
printf("Error\n");
rf(sum);
}
(void)argc;
return (0);
}

int rf(int x)
{
(void)x;
return (1);
}
