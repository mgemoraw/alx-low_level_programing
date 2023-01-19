#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints name
* @name: name pointer
* @f: function pointer
* Return: returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;

(*f)(name);
}
