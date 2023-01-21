#include "variadic_functions.h"

/**
* print_all - function prints all formats
* @format: format text
* Return: returns nothing
*/
void print_all(const char * const format, ...)
{
    char flag;
    char *fmt;
    char *str;
    unsigned int i = 0, len = 0;
    va_list list;

    if (format == NULL)
    return;

    while (*(format + len)!= '\0')
    len++;


    va_start(list, format);

    while (i < len )
    {
        flag = format[i];
    
        switch(flag)
        {
        case 'c':
            fmt = "%c";
            printf(fmt, va_arg(list, int));
            break;
        case 'i':
            fmt = "%i";
            printf(fmt, va_arg(list, int));
            break;
        case 's':
            str = va_arg(list, char*);
            fmt = "%s";
            printf("%s", str);
            break;
        case 'f':
            fmt = "%f";
            printf(fmt, va_arg(list, double));
            break;
        default: 
            i++;
            continue;
        }
        if (i < len-1)
        printf(", ");
        i++;
    }
    va_end(list);

    printf("\n");
}

