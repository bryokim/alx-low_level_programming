#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the first 50
 * Fibonacci numbers starting with
 * 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long i, c, a = 0, b = 1;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (i < 49)
			printf("%ld, ", c);
		else
			printf("%ld", c);
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
