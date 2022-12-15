#include "main.h"

/**
*more_numbers - prints more numbers
*
*Return: returns nothing
*/

void more_numbers(void)
{
    int num, man;
    for (num = 0; num < 10; num++)
    {
        for (man = 0; man < 15; man++)
        {
            if (man > 9)
            {
                _putchar(man / 10 + '0');
            }
            _putchar(man % 10 + '0');
        }
        _putchar(10);
    }
}
