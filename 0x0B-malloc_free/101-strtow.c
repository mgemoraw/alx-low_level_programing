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
* argstostr - splits two strings
* @str: input string
* Return: arrays of splitted string
*/
char **strtow(char *str)
{

}
