#include "function_pointers.h"

/**
* print_name - prints name
* @name: name pointer
* @f: function pointer
* Return: returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

(*f)(name);
}
