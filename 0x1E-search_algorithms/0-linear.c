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
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
