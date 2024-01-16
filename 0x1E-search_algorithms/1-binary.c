#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: input integer array
 * @size: size of array
 * @value: target value
 * Return: returns index if found else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, right, left;

	left = 0, right = size -1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right - 1; ++i)
		{
			printf("%d, " , array[i]);
		}
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}

	return (-1);
}
