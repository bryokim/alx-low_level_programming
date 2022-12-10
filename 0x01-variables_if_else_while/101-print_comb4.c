#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible
 * different combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 48, num1, num2, sum;

	while (num < 58)
	{
		num1 = num + 1;
		while (num1 < 58)
		{
			num2 = num1 + 1;
			while (num2 < 58)
			{
				putchar(num);
				putchar(num1);
				putchar(num2);
				sum = num + num1 + num2;
				if (sum != 168)
				{
					putchar(',');
					putchar(' ');
				}
				num2++;
			}
			num1++;
		}
		num++;
	}
	putchar('\n');

	return (0);
}
