/**
 * int_index - searches for an integer
 * @array: array where to search for integer
 * @size: size of the array
 * @cmp: pointer to function used to compare values
 *
 * Return:
 * index of the integer if it is found
 * -1 if size is 0 or value is not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
