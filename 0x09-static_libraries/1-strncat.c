/**
 * _strncat - concatenates two strings
 * @dest: string to be added to
 * @src: string to be appended to dest
 * @n: number of bytes to be appended
 *
 * Description: appends at most n bytes from source to dest
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && (dest[i] = src[j]) != '\0'; j++, i++)
		;

	if (j == n)
		dest[i] = '\0';

	return (dest);
}
