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
* _strncpy - copies string 1 to string 2
* @dest: destination string
* @src: source string
* @n: input position integer
* Description: this function resets to 98
* Return: returns nothing
*/

char *_strncpy(char *dest, char *src, int n)
{
/* int d = _strlen(dest);
int s = _strlen(src); */

int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
/*dest[i] = '\0'; */
return (dest);
}
