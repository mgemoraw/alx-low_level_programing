#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns pointer array
* @str: input character array
* Return: returns pointer
* Author: mgemoraw
*/
char *_strdup(char *str)
{
char *cpy;
unsigned int len = strlen(str) + 1;
if(!(cpy = malloc(sizeof(char)*len)))
return (NULL);
else
memcpy(cpy, str, len);
return (cpy);
}