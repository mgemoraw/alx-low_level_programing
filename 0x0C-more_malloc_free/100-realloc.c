#include "main.h"
#include <stdlib.h>

/**
* _realloc - void func allocates memory
* @ptr: input pointer
* @old_size: old size
* @new_size: new size
* Return: returns nothin
* Author: megemoraw
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *str;
char *ptrcpy, *ss;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
str = malloc(new_size);
if (str == NULL)
return (NULL);
return (str);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ptrcpy = ptr;
str = malloc(sizeof(*ptrcpy) * new_size);

if (str == NULL)
{
free(ptr);
return (NULL);
}
ss = str;

for (i = 0; i < old_size && i < new_size; i++)
{
ss[i] = *ptrcpy++;
}
free(ptr);
return (str);
}
