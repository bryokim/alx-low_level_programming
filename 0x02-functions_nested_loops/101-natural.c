#include <stdio.h>

/**
 * main - entry poimt
 *
 * Description: prints the sum of all the
 * multiples if 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
