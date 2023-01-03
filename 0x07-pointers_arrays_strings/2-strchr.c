#include "main.h"

/**
* _strchr - searchs for character c
* @s: input string
* @c: input character
* Return: returns pointer string from c
*/

char *_strchr(char *s, char c)
{
unsigned int i;
char ch = c;
for (i = 0;; i++)
{
if (*(s + i) == ch)
{
return (s + i);
}
if (*(s + i) == '\0')
{
return (NULL);
}
}
}
