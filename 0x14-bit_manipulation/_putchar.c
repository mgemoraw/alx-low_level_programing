#include "main.h"
/**
* _putchar - puts charactor into the stdio
* @c: input character
* Return: returns character
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
