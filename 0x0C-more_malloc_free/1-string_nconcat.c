#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to concatenated string
 * or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len, s2_len, sum;

	s1 == NULL ? (s1_len = 0) : (s1_len = strlen(s1));
	s2 == NULL ? (s2_len = 0) : (s2_len = strlen(s2));

	n >= s2_len ? (sum = s1_len + s2_len) : (sum = s1_len + n);

	str = malloc(sizeof(*str) * (sum + 1));
	if (!str)
		return (NULL);

	memcpy(str, s1, s1_len);
	memcpy(str + s1_len, s2, (sum - s1_len));
	*(str + sum) = '\0';

	return (str);
}
