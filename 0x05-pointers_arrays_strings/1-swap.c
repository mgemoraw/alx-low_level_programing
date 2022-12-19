#include "main.h"
/**
* swap_int - swaps two values of two integers
* @a: input integer 1
* @b: input interer 2
* Description: this function swaps a and b
* Return: returns nothing
*/

void swap_int(int *a, int *b)
{

int *temp;
*temp = *a;
*a = *b;
*b = *temp;

}
