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
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return (NULL);
}
