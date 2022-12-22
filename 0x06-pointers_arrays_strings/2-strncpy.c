/**
 * _strncpy - copies a string
 * @dest: string to copy into
 * @src: string to copy from
 * @n: number of bytes to be copied
 *
 * Description: copies at most n bytes from src into dest
 * A terminating null byte is added to dest
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
