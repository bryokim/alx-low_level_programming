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
	char *s1;

	for ( ; *s != '\0'; s++)
	{
		for (s1 = accept; *s1 != '\0'; s1++)
		{
			if (*s == *s1)
				return (s);
		}
	}
	return ((char *) '\0');
}
