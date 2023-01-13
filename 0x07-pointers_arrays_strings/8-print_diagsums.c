#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints diagonal sum
* @a: input array
* @size: size of array
* Return: returns nothing
* Author: mgemoraw
*/

void print_diagsums(int *a, int size)
{
int i, suma = 0, sumb = 0;

for (i = 0; i < size; i++)
{
suma += a[i];
a += size;
}

a -= size;

for (i = 0; i < size; i++)
{
sumb += a[i];
a -= size;
}
printf("%d, %d\n", suma, sumb);
}
