#include "main.h"

/**
 * print_diagonal -draws a diagonal on terminal
 * @n : number of \ characters to be printed
 *
 * Description: draws a diagonal on the terminal
 * if n is greater than 0, otherwise only \n is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
