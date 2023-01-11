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
* str_concat - concatinates two strings
* @s1: input character array
* @s2: input character array
* Return: concatenated string
* Author: mgemoraw
*/
char *str_concat(char *s1, char *s2)
{
char *str;
unsigned int i, j, len;
len = _strlen(s1) + _strlen(s2) + 1;

if (s1 == NULL && s2 != NULL)
return (s2);
else if (s1 != NULL && s2 == NULL)
return (s1);
else if (s1 == NULL && s2 == NULL)
return (NULL);

str = malloc(len);
for (i = 0; i <= _strlen(s1); i++)
{
str[i] = s1[i];
}

for (j = 0; j <= _strlen(s2); j++)
{
str[i] = s2[j];
i++;
}
str[len - 1] = '\0';

return (str);
}
