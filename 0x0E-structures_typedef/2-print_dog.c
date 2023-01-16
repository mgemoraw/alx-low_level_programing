#include "dog.h"
#include <stdio.>

/**
* print_dog - function prints dog
* @d: structure dog
* Return: retrns nothing
*/
void print_dog(struct dog *d)
{
if (d == NULL)
printf("");

if (d->name == NULL)
d->name = "nil";

if (d->age == NULL)
d->age = 0.0;

if (d->onwer == NULL)
d->owner = "nil";

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
return;
}
