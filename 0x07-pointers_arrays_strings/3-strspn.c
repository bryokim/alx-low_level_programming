#include "main.h"

/**
 * _strspn - find number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: string
 * @accept: string
 *
 * Return: number of bytes in initial segment os that consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *s1;

	for (s1 = s; *s1 != '\0' ; s1++)
	{
		if (_strchr(s2, *s1) == NULL)
			return (s1 - s);
	}
	return (s1 - s);
}
