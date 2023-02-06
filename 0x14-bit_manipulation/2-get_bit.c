
/**
 * get_bit - get value of a bit at a given index.
 * @n: number
 * @index: index of the bit
 *
 * Return: value of bit at index index or -1 if an error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	n >>= index;
	bit = n & 1;

	return (bit);
}
