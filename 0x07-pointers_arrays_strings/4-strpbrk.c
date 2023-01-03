#include "main.h"

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
for (i = 0;; i++)
{
for (; *s != '\0'; ++s)
{
if (*(accept + i) == *s)
return ((char *)accept);
else if (*accept == '\0')
return (NULL);
}
}
}
