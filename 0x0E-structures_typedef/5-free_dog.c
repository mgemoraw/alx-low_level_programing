#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - frees dog 
* @d: structure variable
* Return: returns nothing
*/
void free_dog(dog_t *d)
{
free(d);
}
