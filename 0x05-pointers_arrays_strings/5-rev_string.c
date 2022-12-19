#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Description: reverses string s
 *
 * Return: void
 */
void rev_string(char *s)
{
	int lo, hi;

	for (lo = 0, hi = strlen(s) - 1; lo < hi; lo++, hi--)
	{
		char temp;

		temp = s[lo];
		s[lo] = s[hi];
		s[hi] = temp;
	}
}
