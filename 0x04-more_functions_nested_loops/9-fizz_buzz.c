#include <stdio.h>

/**
*main - prints number 1 100
*Description: prints 1 - 100
*Return: returns 0
*/
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if(num % 3 == 0)
{
printf("%s ", "Fizz");
}
else if (num % 5 == 0)
{
printf("%s ", "Buzz");
}
else if (num % 15 == 0)
printf("%s ", "FizzBuzz");
else
printf("%d ", num);
}
return (0);
}
