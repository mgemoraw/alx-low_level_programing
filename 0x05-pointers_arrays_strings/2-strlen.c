#include "main.h"
#include <string.h>
/**
* _strlen - returns length of a string
* @s: input string
* Description: this function counts string length
* Return: returns nothing
*/
int _strlen(char *s)
{
int len = 0, c;
for (c = 0; ; c++)
{
if (s[c] != '\0')
{
len += 1;
}
else
{
break;
}
}
return (len);
}
