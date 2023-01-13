#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of array
 * @size: size of each element of the array
 *
 * Return: pointer to the allocated memory
 * otherwise NULL if nmemb == 0 or size == 0 or on memory allocation failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr, *ptr;
	unsigned int i, nb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nb = nmemb * size;
	arr = ptr = malloc(nb);
	if (!arr)
		return (NULL);

	for (i = 0; i < nb; i++)
		*(arr + i) = 0;
	return (ptr);
}
