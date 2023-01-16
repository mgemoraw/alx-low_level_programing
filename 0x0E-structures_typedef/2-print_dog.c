#include "dog.h"
#include <stdio.>

/**
* print_dog - function prints dog
* @d: structure dog
* Return: retrns nothing
*/
void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
return;
}
