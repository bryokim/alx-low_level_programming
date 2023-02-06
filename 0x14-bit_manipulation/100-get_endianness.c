
/**
 * get_endianness - get the endianness
 *
 * Return: 1 if little endian, 0 if big endian.
*/
int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *)&n;

	if (*p)
		return (1);
	else
		return (0);
}
