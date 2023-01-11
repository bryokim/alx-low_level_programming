#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies a string
 * @str: string to copy
 *
 * Return: pointer to a newly allocated space in memory
 * or NULL on failure
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (!str)
		return (NULL);

	len = strlen(str);
	s = malloc((len * sizeof(char)) + 1);
	if (!s)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
