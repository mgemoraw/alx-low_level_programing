#include "main.h"

/**
* _strlen_recursion -FUNCTION RECURSIVE RETURNS LENGTH
* @s: character string
* Return: returns LENGTH OF STRING S
* Author: mgemoraw
*/

int _strlen_recursion(char *s)
{
static int i = 0;
if(*(s + i) != '\0')
{
i++;
_strlen_recursion(s++);
}
return i;
}
