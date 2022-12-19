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
	int i;

	for (i = strlen(s); s[i] != '\0'; i--)
		_putchar(s[i - 1]);

	_putchar('\n');
}
