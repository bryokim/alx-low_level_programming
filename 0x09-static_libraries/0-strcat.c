/**
 * _strcat - concatenates two strings
 * @dest: string to add to
 * @src: string to be appended
 *
 * Description: appends the src atring to the dest, overwriting
 * the terminating null byte at end of dest, and then adds
 * a terminating null byte
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0' ; i++)
		;

	for (j = 0; (dest[i] = src[j]) != '\0'; i++, j++)
		;

	return (dest);
}
