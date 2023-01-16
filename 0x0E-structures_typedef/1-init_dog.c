#include "dog.h"
#include<stdio.h>

/**
* init_dog - function that initializes struct dog
* @d: structure dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Author: mgemoraw
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
return;
}
}
