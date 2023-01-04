#include <string.h>

/**
 * _strstr - finds the first occurrence of the substring needle in
 * the substring needle in the string haystack.
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beggeining of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needlelen;

	if (*needle == '\0')
		return ((char *) haystack);
	needlelen = strlen(needle);

	for ( ; (haystack = strchr(haystack, *needle)) != NULL; haystack++)
	{
		if (memcmp(haystack, needle, needlelen) == 0)
			return ((char *) haystack);
	}
	return (NULL);
}
