#include "main.h"
#include<stddef.h>

/**
* _strstr - locates the substring
* @haystack: input string
* @needle: comparision string
* Return: returns pointer to string
* Author: mgemoraw
*/
char *_strstr(char *haystack, char *needle)
{
for (;; ++needle)
{
for (;; ++haystack)
{
if (*needle == *haystack)
return ((char *)haystack);
if (*needle == '\0')
return (NULL);
}
}
}
