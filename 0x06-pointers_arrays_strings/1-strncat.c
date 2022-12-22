#include "main.h"

/**
* _strlen - computes length of a string
* @str: input string
* Return: length of a string
*/
int _strlen(char *str)
{
int c = 0;
while (str[c] != '\0')
{
c++;
}
return (c);
}

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: source string
* @n: input position integer
* Description: this function resets to 98
* Return: returns nothing
*/

char *_strncat(char *dest, char *src, int n)
{
int d = _strlen(dest);
/*int s = _strlen(src); */
int i = 0;
while (i < n && src[i] != '\0')
{
dest[d] = src[i];
i++;
d++;
}
dest[d] = '\0';
return (dest);
}
