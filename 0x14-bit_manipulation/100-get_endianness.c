#include "main.h"
/**
* get_endianness - checks for endianness
* @void: no parameter
* Return: returns int
*/
int get_endianness(void)
{
	unsigned int num;
	char *ch;

	num = 1;
	ch = (char *) &num;

	return ((int)*ch);
}
