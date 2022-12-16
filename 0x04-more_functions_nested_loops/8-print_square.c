#include "main.h"

/**
 * print_square - prints a square
 * @size : size of the square
 *
 * Description: prints a square of side size
 * if size is greater than 0, else only a new line
 * is printed
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
