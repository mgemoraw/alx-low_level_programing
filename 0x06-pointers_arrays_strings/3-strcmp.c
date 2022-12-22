#include "main.h"

/**
* _strlen - computes length of a string
* @str: input string
* Return: length of a string
*/
int _strlen(char *str)
{
int c = 0;
while (str[c] != '\0')
{
c++;
}
return (c);
}

/**
* _strcmp - compares two strings
* @s1: string1
* @s2: string 2
* Description: this function resets to 98
* Return: returns nothing
*/

char *_strcmp(char *s1, char *s2)
{

int i = 0, sum = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] >= s2[i])
{
sum += s1[i] - s2[i];
return (sum);
}
else if (s1[i] == s2[i])
{
sum += s1[i] - s2[i];
}
else
{
sum = s1[i] - s2[i];
return (sum);
}
i++;
}
/*dest[i] = '\0'; */
return (sum);
}
