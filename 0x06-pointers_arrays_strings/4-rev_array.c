#include "main.h"

/**
* reverse_array - computes length of a string
* @a: input int array
* @n: input array size
* Return: length of a string
*/
void reverse_array(int *a, int n)

{
int i = 0, b = n - 1;
for (i = 0; i <= b ; i++)
{
unsigned int temp = a[i];
a[i] = a[b];
a[b] = temp;
b--;
}
}
