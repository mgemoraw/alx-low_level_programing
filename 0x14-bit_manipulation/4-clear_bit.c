#include "main.h"
/**
* clear_bit - sets the value of a bit in an int to zero
* @n: input integer pointer
* @index: index of the bit
* Return: returns 1 if right and -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
