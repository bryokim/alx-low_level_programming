#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, pre, max;
	unsigned int sum1, sum2;

	max = size * size;
	sum1 = sum2 = pre = 0;

	for (i = 0; i < max; i++)
	{
		if (i == (pre + size + 1) || i == 0)
		{
			sum1 += *(a + i);
			pre = i;
		}
		if ((i % (size - 1) == 0) && i != (max - 1) && i != 0)
		{
			sum2 += *(a + i);
		}
	}
	printf("%u, %u\n", sum1, sum2);
}
