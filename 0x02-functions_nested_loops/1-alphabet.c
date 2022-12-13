#include "main.h"

/**
* _putchar - writes the character c to stdout
* print_alphabet - prints alphabets
*
* Return: on success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);

	}
	_putchar('\n');
}
