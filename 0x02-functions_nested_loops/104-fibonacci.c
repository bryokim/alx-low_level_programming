#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the first 98
 * Fibonacci numbers starting with
 * 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long long i, c, a = 0, b = 1;

	for (i = 0; i < 98 ; i++)
	{
		c = a + b;
		if (i < 97)
			printf("%lld, ", c);
		else
			printf("%lld\n", c);
		a = b;
		b = c;
	}
	return (0);
}
