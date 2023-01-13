#include "main.h"
#include <stdlib.h>

/**
* array_range - function allocates memory
* @min: input minimum size
* @max: input size
* Return: returns memory
* Author: megemoraw
*/
int *array_range(int min, int max)
{
int *arr, i, size;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min++;
}
return (arr);
}
