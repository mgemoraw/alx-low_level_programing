#include "main.h"

/**
* _memset - fills memory
* @dest: destination string
* @src: source string
* @n: size of characters copied
* Return: returns pointer string dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c;
for (c = 0; (c < n); c++)
{
*(dest + c) = src[c];
}
return (dest);
}
