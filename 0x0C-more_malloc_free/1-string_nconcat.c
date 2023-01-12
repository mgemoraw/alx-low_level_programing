#include "main.h"
#include <stdlib.h>

/**
* _strlen - returns length of string
* @str: input character array
* Return: returns size of string
* Author: mgemoraw
*/
unsigned int _strlen(char *str)
{
unsigned int len = 0;
while (*(str + len) != '\0')
{
len++;
}
return (len);
}

/**
* string_nconcat - equivalent to strncat
* @s1: destination string
* @s2: source string
* @n: number of characters from s2
* Return: returns concatenated string
* Author: mgemoraw
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int size, i, j;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (n >= _strlen(s2))
n = _strlen(s2);

size = _strlen(s1) + n;
str = malloc(size + 1);

if (str == NULL)
return (NULL);

for (i = 0; *(s1 + i) != '\0'; i++)
{
str[i] = s1[i];
}

for (j = 0; j < n; j++)
{
str[i + j] = s2[j];
}
return (str);
}
