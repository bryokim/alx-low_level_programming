/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: buffer pointed to
 * @b: constant byte to replace with
 * @n: number of bytes
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
