#include "main.h"

/**
* leet - encodes aeotl wit 43071
* @str: input string
* Return: length of a string
*/

char *leet(char *str)
{

int i, j = 0;
char str1[] = "aAeEoOtTlL";
char str2[] = "4433007711";

for (i = 0; *(str + i); i++)
{
while (j  < 9)
{
if (str1[j] == str[i])
str[i] = str2[j];
j++;
}
}
return (str);
}