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
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
* Description: this function resets to 98
* Return: returns nothing
*/

void *_strcat(char *dest, char *src)
{
int d = _strlen(dest);
/*int s = _strlen(src); */
int i = 0;
while (src[i] != '\0')
{
dest[d] = src[i];
i++;
d++;
}
dest[d] = '\0';
}
