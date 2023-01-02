#include 'main.h'

/**
* _memset - fills memory
* @s: input string
* @b: fill back character
* @n: number of fills required
* Return: returns pointer string s
*/

char *_memset(char *s, char b, unsigned int n)
{
int c;
for (c = 0; (s[c] != '\0') && (c < n); c++)
{
*(s + c) = b;
}
return (s);
}
