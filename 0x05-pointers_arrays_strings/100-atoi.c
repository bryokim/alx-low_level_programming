#include <ctype.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Description: converts a string to an integer
 *
 * Return: if string contains number, the number
 * is returned, otherwise 0
 */
int _atoi(char *s)
{
	int i, num;

	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]))
		{
			num = num * 10 + s[i] - '0';
			while (isdigit(s[++i]))
				num = num * 10 + s[i] - '0';

			return (num);
		}
		else if (s[i] == '-')
		{
			while (s[++i] == '-')
				;

			if (isdigit(s[i]))
			{
				num = num * 10 + s[i] - '0';
				while (isdigit(s[++i]))
					num = num * 10 + s[i] - '0';
				return (-num);
			}
			else if (s[i] == '\0')
			{
				return (0);
			}
		}
	}
	return (0);
}
