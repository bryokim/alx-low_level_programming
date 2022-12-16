#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n : number of times _ should be printed
 *
 * Description: draws a line in the terminal
 * if n is greater than 0
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
