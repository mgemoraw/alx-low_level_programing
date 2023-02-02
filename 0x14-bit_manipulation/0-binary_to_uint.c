#include "main.h"
/**
* _strlen - the length of string
* @b: input binary string
* Return: returns length of string
*/
unsigned int _strlen(const char *b)
{
    unsigned int len = 0, i = 0;
    while (*(b + i) != 0)
    {
        len += 1;
        i++;
    }
    return (len);
}
/**
* binary_to_uint - converts binary to unsigned int
* @b: pointer to binary number
* Return: returns unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0, pro = 0, i, j;
    for (i = 0; *(b + i) != '\0'; i++)
    {
        if (*(b + i) == '0')
            continue;
        else
        {
            pro = 1;
            for (j = 0; j < _strlen(b+i) - 1; j++)
                pro *= 2;
        }
        num += pro;
    }
    return (num);
}
