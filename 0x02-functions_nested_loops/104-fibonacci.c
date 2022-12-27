#include <stdio.h>

/**
 * main- prints sum of even fibonacci numbers
 * fibonacci sum
 * Return: Always 0.
 *
 * Owner By mgemoraw
 */
int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, c;
	unsigned long int num1, num2, num3, num4, f1, f2;

	for (i = 0; i < 92; i++)
	{

		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	num1 = a / 10000000000; /*10,000,000,000 */
	num2 = b / 10000000000;
	num3 = a % 10000000000;
	num4 = b % 10000000000;

	for (i = 92; i < 98; i++)
	{
		f1 = num1 + num2;
		f2 = num3 + num4;
		if ((num3 + num4) > 9999999999) /*9,999,999,999*/
		{
			f1 += 1;
			f2 %= 10000000000; /*10,000,000,000 */
		}
		printf("%lu%lu", f1, f2);
		if (i != 97)
			printf(", ");
		else
			printf("\n");
		num1 = num2;
		num3 = num4;
		num2 = f1;
		num4 = f2;
	}
	return (0);
}
