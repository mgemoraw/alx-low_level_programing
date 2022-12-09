#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: prints  alphabets using putchar
 * Return: 0
 */

int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++){
		if (ch == 'q' || ch == 'e'){
			continue;
		}
		else{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
