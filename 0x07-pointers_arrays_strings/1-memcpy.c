/**
 * _memcpy - copies n bytes from memory area src to
 * memory area dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- != 0)
		*dest++ = *src++;
	return (dest);
}
