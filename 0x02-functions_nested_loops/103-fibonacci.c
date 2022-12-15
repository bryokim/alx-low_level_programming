#include <stdio.h>
#define MAX 4000000

/**
 * main - entry point
 *
 * Description: prints sum of the even
 * valued fibonacci numbers not exceeding
 * 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	long long c, a = 0, b = 1, sum = 0;

	while (b <= MAX)
	{
		c = a + b;

		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%lld\n", sum);
	return (0);
}
