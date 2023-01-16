#include "main.h"
/**
* isPrime - checks for prime number
* @n: input number
* @i: divider
* Return: returns 1 if prime else 0
*/
int isPrime(int n, int i)
{
    // Base cases
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
 
    // Check for next divisor
    return isPrime(n, i + 1);
}
/**
* is_prime_number  - checks for prime number
* @n: input integer
* Return: 1 if prime 0 if not
* Author: mgemoraw
*/
int is_prime_number(int n)
{
int p = 2;
return (isPrime(n, p));

}
