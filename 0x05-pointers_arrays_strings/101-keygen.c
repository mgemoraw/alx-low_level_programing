#include "main.h"
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
/**
* main - generates keygen string
*
* Description: this program prints keygen strings
* Return: returns nothing
*/

int main(void)
{

int num;
char ch;

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
