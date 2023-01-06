#include "main.h"

/**
* _sqrt_recursion - finds natural square root of a number
* @n: input square number
* Return: returns square root of a number
* Author: mgemoraw
*/
int _sqrt_recursion(int n)
{
    static int guess = 1;
    if (guess < n)
    {
        if (n < 0)
            return (-1);
        if (n == 0)
            return (0);
        if (n == 1)
            return (n);
        else
        {    
            guess ++;
            return (n / _sqrt_recursion(n)); 
        }
    }

}
