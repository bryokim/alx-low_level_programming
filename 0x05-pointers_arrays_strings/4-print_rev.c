#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Description: prints string s in reverse
 * followed by a new line
 *
 * Return: void
 */
void print_rev(char *s)
{
	size_t i = strlen(s);

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
