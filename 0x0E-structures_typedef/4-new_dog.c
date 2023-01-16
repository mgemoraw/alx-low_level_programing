#include "dog.h"
#include <stdio.h>
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
 * _strcopy - Copies a string from source to dest
 * @dest: The buffer storing the string copy.
 * @source: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *source)
{
int i = 0;

for (i = 0; source[i]; i++)
dest[i] = source[i];

dest[i] = '\0';

return (dest);
}

/**
* new_dog - creats new dog
* @name: name of the dog
* @age: age of dog
* @owner: owner of the dog
* Return: retrns struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);

d->name = malloc(sizeof(char) * _strlen(name));
if (d->name == NULL)
{
free(d->name);
return (NULL);
}
d->owner = malloc(sizeof(char) * _strlen(owner));
if (d->owner = NULL)
{
free(d->owner);
return (NULL);
}

d->name = _strcpy(d->name, name);
d->age = age;
d->owner = _strcpy(d->owner, owner);
return (d);
}
