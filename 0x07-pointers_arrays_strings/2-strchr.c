/**
 * _strchr - returns a pointer to the first occurrence
 * of the character c in the string s or NULL if character
 * is not found
 * @s: string
 * @c: character to search
 *
 * Return: pointer to first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i++] != c && s[i] != '\0')
		;
	return ((s[i] == c) ? i : NULL);
}