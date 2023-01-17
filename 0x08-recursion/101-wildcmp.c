#include "main.h"
#include <stdio.h>
/**
* _strlen - returns length of string
* @str: input character array
* Return: returns size of string
* Author: mgemoraw
*/
int _strrlen(char *str)
{
if (str == NULL)
return (0);
else
return (1 + _strrlen((char *)str++));
}
/**
* wildcmp - compares two strngs
* @s1: character array
* @s2: character array
* Return: returns 1 if s1 == s2
* Author: mgemoraw
*/

int wildcmp(char *s1, char *s2)
{
if (s1 == NULL && s2 == NULL)
return (0);

if (s1 == NULL || s2 == NULL)
return (0);

if (_strrlen(s2) == _strrlen(s1))
{
    if (*s1++ == *s2++)
    return (wildcmp((char *)s1++, (char *)s2++));
}

return (0);

}
