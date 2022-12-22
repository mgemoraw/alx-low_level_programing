#include "main.h"

/**
* reverse_array - computes length of a string
* @a: input int array
* @n: input array size
* Return: length of a string
*/
void reverse_array(int *a, int n)

{
int i = 0;
n -= 1;
while (i < n)
{
int temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
