#include "main.h"

/**
 * _print_rev_recursion - prints a tring in reverse
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(++s);
	_putchar(*(s - 1));
}
