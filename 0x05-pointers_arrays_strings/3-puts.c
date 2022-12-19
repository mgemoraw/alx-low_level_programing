#include "main.h"
#include <string.h>
/**
* _puts - prints a string
* @str: input string
* Description: this prints prints strings
* Return: returns nothing
*/
void _puts(char *str)
{
int c = 0;
while (str[c] != '\0')
{
_putchar(str[c]);
c += 1;
}
_putchar('\n');

}
