#include <stdio.h>

/**
 * print_array - prints n elements of array a
 * @a: array whose elements are to be printed
 * @n: number of elements to print
 *
 * Description: prints n elements of array a
 * followed by a new line. Numbers are separated
 * by a comma followed by a space.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
