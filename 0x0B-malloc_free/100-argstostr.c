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
* _stracpy - concatenates two strings
* @dest: destination string
* @source: source string
* Return: returns size of string
*/
void _stracpy(char *dest, char *source)
{
int i, j;
i = _strlen(dest);

for (j = 0; *(source + j) != '\0'; j++)
{
dest[i + j] = source[j];
}
return;
}

/**
* argstostr - concatenates arguments of string
* @ac: argument count
* @av: argument array
* Return: returns character array
*/
char *argstostr(int ac, char **av)
{
char *str;
char *ln = "\n";
int i, len;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len += _strlen(av[i]);
}

str = malloc(sizeof(char) * len + 1);

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
_stracpy(str, av[i]);
_stracpy(str, ln);
}

return (str);
}
