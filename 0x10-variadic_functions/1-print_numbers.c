#include "variadic_functions.h"

/**
* print_numbers - prints all numbers
* @separator: separator string
* @n: number of args
* Return: returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;


va_start(list, n); /*sart of argument array */
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
}
