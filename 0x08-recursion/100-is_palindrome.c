#include "main.h"
#include <stdio.h>

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
* is_palindrome - checks for palindrom text
* @s: input character array
* Return: returns 1 if palindrom and 0 if not
* Author: mgemoraw
*/
int is_palindrome(char *s)
{
int x;
if (s == NULL)
return (1);

x = _strlen(s);

if (x == 0)
return (1);
else
return (0);
}
