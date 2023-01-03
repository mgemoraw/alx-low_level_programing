#include "main.h"

/**
* _strspn - returns sth
* @s: - input string
* @accept: input string
* Return: returns integer
* Author: megemoraw
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0;
int i, j;
for (i = 0; *(accept + i) != '\0'; i++)
{
for (j = 0; *(s + j) != ' ' || s[j] != ','; j++)
{
if (*(accept + i) == *(s + j))
x++;
else if (*(s + j) == ' ' || *(s + j) == '\0' || *(s + j) == ',')
break;
}
}
return (x);
}
