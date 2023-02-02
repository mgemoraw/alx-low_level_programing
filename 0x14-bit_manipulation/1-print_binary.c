#include "main.h"

/**
* bin - binary form of a number
* @n: integer number
* Return: returns string of binary form
*/
char bin(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			bin(n >> 1);
		return (_putchar((n & 1) + '0'));
	}
	else
	{
		return (_putchar('0'));
	}
}
/**
* print_binary - prints binary form of a number
* @n: input integer
* Return: returns nothing
*/
void print_binary(unsigned long int n)
{
	bin(n);
}
