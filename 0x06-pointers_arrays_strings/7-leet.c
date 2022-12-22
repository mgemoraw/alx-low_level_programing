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
* leet - encodes aeotl wit 43071
* @str: input string
* Return: length of a string
*/

char *leet(char *str)
{
int len = _strlen(str);
int i = 0, j = 0;
char str1[] = "aAeEoOtTlL";
char str2[] = "4433007711";

while (i < len)
{
while (j  < 9)
{
if (str1[j] == str[i])
str[i] = str2[j];
j++;
}
i++;
}
return (str);
}
