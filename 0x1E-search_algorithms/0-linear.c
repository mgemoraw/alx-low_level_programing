#include <stdio.h>


/**
 * linear_search - linear search implementation of c
 *
 * @array: pointer to first element of the array
 * @size: size of array
 * @value: target value of the array
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
