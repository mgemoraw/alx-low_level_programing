#include "variadic_functions.h"
#include "../_string.h"
#include <unistd.h>

/**
* _strlen - returns length of string
* @str: input character array
* Return: returns size of string
* Author: mgemoraw
*/
int _strlen(char *str)
{
int len = 0;
while (*(str + len) != '\0')
{
len++;
}
return (len);
}
/**
* _putchar - puts the character string to i/o
* @c: input character
* Return: returns charactor to i/o
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* print_all - function prints all formats
* @format: format text
* Return: returns nothing
*/
void print_all(const char * const format, ...)
{
    char *flags;
    unsigned int i, len = 0;

    while(*(format + len) != '\0')
    {
    len++;
    }

    printf("%u", len);
    va_list list;

    va_start(list, format);
    // printf("%s", va_arg(list, char*));



}

int main(int argc, char *argv[])
{
    print_all("ceis", "B liu", "a", "what is app");
    return (0);
}