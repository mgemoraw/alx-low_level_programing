#include "main.h"
#include <stdlib.h>

/**
* _strlen - returns length of string
* @str: input character array
* Return: returns size of string
* Author: mgemoraw
*/
int _strlen(char *str)
{
int len = 0;
while (*(str + len) != '\0')
{
len++;
}
return (len);
}

/**
* _wordcount - counts the number of words
* @str: input string
* Return: returns number of words in a string
*/
int _wordcount(char *str)
{
int i = 0, l, w = 0, words = 0, sp = 0;

while (*(str + w) != '\0')
{
l = 0;

for (i = w; *(str + i) != '\0'; i++)
{

if (*(str + i) == ' ')
{
sp++;
w++;
break;
}
else
{
l++;
w++;
continue;
}
}
if (l > 0)
words++;

}

return (words);
}

/**
* strtow - splits two strings
* @str: input string
* Return: arrays of splitted string
*/
char **strtow(char *str)
{
char **split;
int  i = 0, j = 0, words, w = 0, l, sp, k;

if (str == NULL || str[0] == '\0')
return (NULL);

words = _wordcount(str);
if (words == 0)
return (NULL);

split = malloc(sizeof(char *) * (words + 1));

if (split == NULL)
return (NULL);

while (*(str + w) != '\0')
{
l = 0;
for (i = w; *(str + i) != '\0'; i++)
{
if (*(str + i) == ' ')
{
sp++;
w++;
break;
}
else
{
l++;
w++;
continue;
}
}
if (l > 0)
{
split[j] = malloc(sizeof(char) * (l + 1));
for (k = 0; k < l; k++)
{
split[j][k] = str[w - l + k - 1];
}
/* printf("%s\n", split[j]); */
j++;
}

}
return (split);
}
