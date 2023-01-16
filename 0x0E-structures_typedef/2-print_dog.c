#include "dog.h"
#include <stdio.h>

/**
* print_dog - function prints dog
* @d: structure dog
* Return: retrns nothing
* Author: mgemoraw
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

if (d->name == NULL)
d->name = "nil\n";
else
printf("Name: %s\n", d->name);

if (!(d->age))
printf("nil\n");
else
printf("Age: %f\n", d->age);

if (d->owner == NULL)
d->owner = "nil\n";
else
printf("Owner: %s\n", d->owner);

return;
}
