
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 if it worked, -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);

	bit = 1 << index;
	*n |= bit;

	return (1);
}
