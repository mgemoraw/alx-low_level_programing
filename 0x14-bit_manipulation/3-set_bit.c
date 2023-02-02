#include "main.h"
/**
*set_bit - sets bit of integer at index
*@n: input integer
*@index: index of bit
*Return: returns somting
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
