#include "main.h"
#include <stdlib.h>

/**
* _calloc - function allocates memory
* @nmemb: input integer
* @size: input size
* Return: returns memory
* Author: megemoraw
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *str;
char *s;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

str = malloc(size * nmemb);

if (str == NULL)
{
return (NULL);
}

s = str;

for (i = 0; i < (size * nmemb); i++)
{
s[i] = '\0';
}
return (str);
}
