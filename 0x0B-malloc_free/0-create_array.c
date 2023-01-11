#include "main.h"

/**
* create_array - allocates memory and initializes with character c
* @size: size of array
* @c: input character
* Return: returns pointer
* Author: mgemoraw
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
