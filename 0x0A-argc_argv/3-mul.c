#include <stdio.h>
#include <stdlib.h>

/**
* main - function prints number of args
* @argc: argument count
* @argv: argument array
* Return: returns 0
* Author: mgemoraw
*/

int main(int argc, char *argv[])
{
int mul = 0;

if(argv[1] && argv[2])
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
(void) argc;
return (0);
}
