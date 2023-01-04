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
	unsigned int i, x, z;

	x = 0;
	z = 0;
	for (i = 0; i < size; i++)
	{
		x += a[size * i + 1];
		z += a[size * (i + 1) - (i + 1)];
	}
	printf("%d, %d\n", x, z);
}
