#include "main.h"

/**
* rev_string - reverses string a string
* @s: input string
* Description: this prints prints strings
* Return: returns nothing
*/

void rev_string(char *s)
{

int len = 0, i, j;
char temp;

while (s[len] != '\0')
{
len++;
}

j = len - 1;

/*  reversing the order of string  */
for (i = 0; j >= 0 && i < j; i++)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
if (j >= 0)
j--;
else
break;
}

/* s[i]  = '\0'; */

}
