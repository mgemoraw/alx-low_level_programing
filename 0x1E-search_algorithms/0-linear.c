#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: target value
 * Return: Returns index of target value if found else -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}
