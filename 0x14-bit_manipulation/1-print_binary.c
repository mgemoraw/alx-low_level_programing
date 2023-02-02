#include "main.h"

/**
* bin - binary form of a number
* @n: integer number
* Return: returns string of binary form
*/
char bin(int n)
{
	if (n > 2)
		bin(n / 2);
	return (_putchar(n % 2 + '0'));
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
