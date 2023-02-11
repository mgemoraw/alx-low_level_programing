#include "main.h"
/**
* _putchar - puts character to the screen
* @c: input character
* Return: returns chacter
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
