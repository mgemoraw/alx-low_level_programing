#include <stdio.h>


/**
 * linear_search - linear search implementation of c 
 * 
 * @param array: pointer to first element of the array
 * @param size: size of array
 * @param value: target value of the array
 * @return int 
 */
int linear_search(int *array, size_t size, int value)
{
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			return (i);
		}
	}
	return (-1);
}
