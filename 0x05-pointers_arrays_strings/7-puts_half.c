#include <string.h>
#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 *
 * Description: prints second half of a string followed
 * by a new line. If the number of characters is odd,
 * last n characters are printed where
 *	n = (length_of_the_string - 1) / 2
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, i;

	n = strlen(str) / 2;

	for (i = strlen(str) - n; i < strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');
}
