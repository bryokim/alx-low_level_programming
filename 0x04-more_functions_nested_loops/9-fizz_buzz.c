#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the numbers 1 t0 100,
 * vut for multiples of three prints Fizz,
 * multiples of five prints Buzz,
 * and multiples of both three and five FizzBuzz
 * instead of the number.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');

	return (0);
}
