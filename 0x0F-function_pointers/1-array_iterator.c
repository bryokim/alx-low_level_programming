#include <stddef.h>

/**
 * array_iterator - executes a function on each element of array
 * @array: array of integers
 * @size: size of the array
 * @action: function to execute on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
