#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string
 * @accept: string
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
