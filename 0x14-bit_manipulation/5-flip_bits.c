#include "main.h"
/**
* flip_bits - flips bits
* @n: input integer number
* @m: input integer number 
* Return: returns something
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int my_bits;

	for (my_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			my_bits++;
    }
	return (my_bits);
}
