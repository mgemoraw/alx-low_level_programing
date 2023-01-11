#include "main.h"
#include <stdlib.h>

/**
* create_array - allocates memory and initializes with character c
* @size: size of array
* @c: input character
* Return: returns pointer
* Author: mgemoraw
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
