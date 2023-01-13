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

for (;; ++s)
{
for (;; ++accept)
{
if (*accept == *s)
return (s);
}
}
return '\0';
}
