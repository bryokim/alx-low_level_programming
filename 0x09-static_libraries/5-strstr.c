#include <string.h>

/**
 * _strstr - finds the first occurrence of the substring needle in
 * the substring needle in the string haystack.
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beggining of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
