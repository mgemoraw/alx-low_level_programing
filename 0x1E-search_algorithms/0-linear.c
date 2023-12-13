#include <stdio.h>


/**
 * linear_search - linear search implementation of c
 *
 * @array: pointer to first element of the array
 * @size: size of array
 * @value: target value of the array
 * Return: int
 * Description: linear search implementation in c
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
