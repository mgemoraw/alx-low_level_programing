#include "main.h"

/**
* leet - encodes aeotl wit 43071
* @str: input string
* Return: length of a string
*/

char *leet(char *str)
{

int i = 0, j = 0;
char *ltr = "aeotlAEOTL";
char *ntr = "4307143071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; ltr[j] != '\0'; j++)
{
if (ltr[j] == str[i])
str[i] = ntr[j];
}
}
return (str);
}
