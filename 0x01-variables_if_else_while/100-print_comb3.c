#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints all possible different
 * combinations of two digits.
 *
 * Return: always 0
 */
int main(void)
{
	int num = 48;
	int sum = 0;

	while (num < 58)
	{
		int num1 = num + 1;

		while (num1 < 58)
		{
			putchar(num);
			putchar(num1);
			sum++;
			if (sum < 45)
			{
				putchar(',');
				putchar(' ');
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
