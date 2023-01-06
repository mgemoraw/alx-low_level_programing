#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: argument counter
 * @argv: agrument vector
 * Return: Returns always zero
 * Author: mgemoraw
 */
int main(int __attribute__((__unused__)) argc, char* argv[])
{
	printf("%d\n", argv[argc - 1]);
	return (0);
}

