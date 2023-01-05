#include "main.h"

/**
* factorial -returns the factorial of a number
* @n: input integer
* Return: returns factorial of number n
* Author: mgemoraw
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
