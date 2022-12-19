#include "main.h"
#include <stdio.h>
/**
* rev_string - reverses string a string
* @s: input string
* Description: this prints prints strings
* Return: returns nothing
*/

void rev_string(char *s)
{

int len = 0, i;
for (i = 0; ; i++)
{
if (s[i] != '\0')
{
len += 1;
}
else
{
break;
}
}

len = len - 1;

/*  reversing the order of string  */

for (i = 0; i < len; i++)
{
char ch;
ch = s[i];
s[i] = s[len - i];
s[len - i] = ch;
}

/* _putchar('\n'); */


}
