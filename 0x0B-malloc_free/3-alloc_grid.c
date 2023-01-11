#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array of integers with
 * each element initialized to 0
 * @width: number of rows
 * @height: number of columns
 *
 * Return: pointer to a 2 dimensional array of integers otherwise
 * NULL is returned
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int **array;
		int i, j;

		array = malloc(height * sizeof(int *));
		if (!array)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			array[i] = malloc(width * sizeof(int));
			if (!array[i])
			{
				while (i > 0)
					free(array[--i]);
				free(array);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
		return (array);
	}
}
