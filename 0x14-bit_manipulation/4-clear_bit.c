
/**
 * clear_bit - sets bit at index to 0
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);

	bit = (~0 << (index + 1)) & (~0 << index);

	*n &= bit;
	return (1);
}
