#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: string to be printed
 *
 * Description: prints string str followed by a new line
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
