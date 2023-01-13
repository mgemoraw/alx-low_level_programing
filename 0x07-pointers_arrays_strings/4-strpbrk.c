#include "main.h"
#include<stddef.h>

/**
* _strpbrk - returns position of first occurance of str
* @s: input string
* @accept: comparision string
* Return: returns pointer
* Author: mgemoraw
*/
char *_strpbrk(char *s, char *accept)
{

int i;
for (;; ++s)
{
for (i = 0; *(accept + i); i++)
{
if (*(accept + i) == *s)
return ((char *)s);
}
}
return (NULL);
}
