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
for (;; ++accept)
{
for (;; ++s)
{
if (*accept == *s)
return ((char *)(s-5));
else if (*accept == '\0')
return (NULL);
}
}
}
