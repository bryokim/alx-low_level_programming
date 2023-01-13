#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting integer(included)
 * @max: ending integer(included)
 *
 * Return: pointer to the array of integers created
 * otherwise NULL is returned
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (!arr)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
