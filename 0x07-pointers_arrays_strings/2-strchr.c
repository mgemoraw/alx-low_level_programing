#include "main.h"

/**
* _strchr - searchs for character c
* @s: input string
* @c: input character
* Return: returns pointer s
*/

char *_strchr(char *s, char c)
{
int i, j, k = 0;

for (i = 0; (s[i] != '\0'); i++)
{
if (*(s + i) == c)
break;
}

for (j = i; s[j] != '\0'; j++)
{
s[k] = s[j];
k++;
}
s[k] = '\0';
return (s);
}
