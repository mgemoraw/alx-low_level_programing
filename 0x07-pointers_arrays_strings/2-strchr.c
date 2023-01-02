#include "main.h"

/**
* _strchr - searchs for character c
* @s: input string
* @c: input character
* Return: returns pointer s
*/

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0;; i++)
{
if (*(s + i) == c)
{
return (s + i);
}
if (*(s + i) == '\0')
{
return (NULL);
}
}
}
