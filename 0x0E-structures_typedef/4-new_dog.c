#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - creats new dog
* @name: name of the dog
* @age: age of dog
* @owner: owner of the dog
* Return: retrns struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    
struct dog *d;
d = malloc(sizeof(struct dog));

if (d == NULL)
return (NULL);

d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
