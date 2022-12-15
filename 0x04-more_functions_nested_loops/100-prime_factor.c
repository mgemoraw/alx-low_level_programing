#include <stdio.h>
#include <stdbool.h>

/**
*main - prints prime factors
*
*Return: 0
*/
int main(void)
{
    long int i;
    long int num = 612852475143;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            num = num / i;
        }
        
    }
    printf("%ld\n", i);

    return (0);
}
