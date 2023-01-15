#include "main.h"

/**
*isqrt_k - computs sqrt
* @k: input intiger
* @n: input integer
* Return: returns recursive number
* Author: mgemoraw
*/
int isqrt_k(int k, int n)
{
int new_k = (k + n / k) / 2;
if ((k * k <= n) && (k + 1) * (k + 1) > n)
{
return (k);
}
else
{
return (isqrt_k(new_k, n));
}
}
/**
* _sqrt_recursion - finds natural square root of a number
* @n: input square number
* Return: returns square root of a number
* Author: mgemoraw
*/
int _sqrt_recursion(int n)
{
return (isqrt_k(1, n));
}
