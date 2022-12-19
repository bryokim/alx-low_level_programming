/**
 * _strcpy - copies string src to dest
 * @dest: buffer to copy into
 * @src: buffer to copy the string
 *
 * Description: copies string pointed to by
 * src, including the terminating nul byte
 * to the buffer pointed to by dest
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
