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
	unsigned int i, j, count;

	i = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j] != ' ')
		{
			if (accept[i] == s[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
