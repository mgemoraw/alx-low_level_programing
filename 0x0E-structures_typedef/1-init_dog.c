#include "dog.h"
#include<stdio.h>

/**
* init_dog - function that initializes struct dog
* @d: structure dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
return;
}
