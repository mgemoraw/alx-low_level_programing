#include "variadic_functions.h"
#include "variadic_functions.h"
/**
* print_strings - prints strings
* @separator: separator string
* @n: argument count
* Return: returns nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str;


va_start(list, n); /*sart of argument array */
for (i = 0; i < n; i++)
{
/*
*if (va_arg(list, char*))
*/
str = va_arg(list, char*);
if (str == NULL)
str = "(nil)";

printf("%s", str);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
