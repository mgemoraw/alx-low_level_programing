#include "function_pointers.h"

/**
* int_index - searchs for index
* @array: array
* @size: size of array
* @cmp: pointer function
* Return: returns integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, elem;

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
elem = array[i];
if (cmp(elem))
{
return (i);
}
}
return (-1);
}
