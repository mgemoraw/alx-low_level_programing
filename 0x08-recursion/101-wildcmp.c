#include "main.h"

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
* wildcmp - compares two strngs
* @s1: character array
* @s2: character array
* Return: returns 1 if s1 == s2
* Author: mgemoraw
*/

int wildcmp(char *s1, char *s2)
{
int i = 0, j = 0;
j = _strlen(s2);

while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
{
i++;
}

if (i == j)
return (1);
else
return (0);

}
