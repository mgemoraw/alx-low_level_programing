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
d->name = "(nil)";
printf("Name: %s\n", d->name);

if ((d->age <= 0))
printf("(nil)\n");
else
printf("Age: %f\n", d->age);

if (d->owner == NULL)
d->name = "(nil)";
printf("Owner: %s\n", d->owner);

return;
}
