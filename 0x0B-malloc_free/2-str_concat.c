#include "main.h"
#include <stdlib.h>

/**
* _strlen - returns length of string
* @str: input character array
* Return: returns size of string
* Author: mgemoraw
*/
int _strlen(char *str)
{
int len = 0;
while (*(str + len) != '\0')
{
len++;
}
return (len);
}

/**
* _stracpy - copies source to dest
* @dest: destination string
* @source: source string
* Return: returns nothing
*/
void _stracpy(char *dest, char *source)
{
int i = 0, j;
if (dest != NULL)
i = _strlen(dest) - 1;

for (j = 0; *(source + j) != '\0'; j++)
{
dest[i + j] = source[j];
}
return;
}
/**
* str_concat - concatinates two strings
* @s1: input character array
* @s2: input character array
* Return: concatenated string
* Author: mgemoraw
*/
char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, len;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len = _strlen(s1) + _strlen(s2) + 1;
str = (char *) malloc(len);

if (str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
str[i] = s1[i];
}

for (j = 0; s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';

return (str);
}
