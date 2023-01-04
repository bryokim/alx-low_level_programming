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
	while (*s != c && *s != '\0')
		s++;

	return ((*s == c) ? (char *) s : (char *)'\0');
}
