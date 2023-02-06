
/**
 * flip_bits - find number of bits you would need to flip to
 * get from one number to another
 * @n: Number to get from
 * @m: Number to got to
 *
 * Return: Number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int num_bits, last_bit;

	num_bits = 0;
	i = n ^ m;

	while (i)
	{
		last_bit = i & 1;
		if (last_bit)
			num_bits++;
		i >>= 1;
	}
	return (num_bits);
}
