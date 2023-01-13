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
int j;
if (*needle == 0)
return (haystack);

for (; *haystack; ++haystack)
{
j = 0;
if (*(haystack + j) == *(needle + j))
{
do {
if (*(needle + j + 1) == '\0')
return (haystack);
j++;
} while (*(haystack + j) == *(needle + j));

}
}
return (NULL);
}

