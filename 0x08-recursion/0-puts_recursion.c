#include "main.h"

/**
* _puts_recursion -FUNCTION RECURSIVE
* @s: character string
* Return: returns nothing
* Author: mgemoraw
*/
void _puts_recursion(char *s)
{
for (; *s != '\0'; ++s)
{
_putchar(*s);
}
_putchar('\n');

}
