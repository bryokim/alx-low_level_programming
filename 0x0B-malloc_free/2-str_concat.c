#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len, s2_len, sum, i, j;
	char *str;

	s1 == NULL ? s1_len = 0 : (s1_len = strlen(s1));
	s2 == NULL ? s2_len = 0 : (s2_len = strlen(s2));
	sum = s1_len + s2_len;

	str = malloc((sum * sizeof(char)) + 1);
	if (!str)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];
	for (j = 0; j < s2_len; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
