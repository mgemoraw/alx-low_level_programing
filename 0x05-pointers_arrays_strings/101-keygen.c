#include "main.h"
#include <stdio.h>
/**
* main - generates keygen string
*
* Description: this program prints keygen strings
* Return: returns nothing
*/

int main(void)
{
char ch;
int num;

srand(time(0));
while (num <= 2645)
{
ch = rand() % 128;
num += ch;
putchar(ch);
}
putchar(2772 - num);
return (0);
}