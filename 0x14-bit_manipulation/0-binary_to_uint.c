#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer
 * @b: the binary string
 *
 * Return: the unsigned integer, or 0 if the string is NULL or
 * there is one or more chars in b that are not 0 or 1
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num, pos_value;
	int len;

	if (!b)
		return (0);

	len = _strlen(b);
	decimal_num = pos_value = 0;
	while (--len >= 0)
	{
		if (b[len] == '1' || b[len] == '0')
		{
			decimal_num += (b[len] - '0') << pos_value++;
		}
		else
		{
			return (0);
		}
	}
	return (decimal_num);
}

/**
 * _strlen - returns the length of the string
 * @s: the string
 *
 * Return: the length of the string
*/
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
