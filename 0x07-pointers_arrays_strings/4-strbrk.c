#include "main.h"
/**
 * _strbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string
 * @accept: string
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such bytes is found
 */
char *_strbrk(char *s, char *accept)
{
	char s1;

	for (s1 = s; *s1 != '\0'; s1++)
	{
		if (_strchr(accept, *s1) != NULL)
			return ((char *) s1);
	}
	return (NULL);
}
