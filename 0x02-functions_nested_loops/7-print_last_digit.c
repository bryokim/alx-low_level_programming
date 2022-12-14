#include "main.h"

/**
 * print_last_digit - function
 * @c : integer to be computed
 *
 * Description: prints last digit of
 * an integer and returns it
 *
 * Return: Value of last digit
 */

int print_last_digit(int c)
{
	int i = c % 10;

	if (i >= 0)
	{
		_putchar('0' + i);
		return (i);
	}
	else
	{
		i *= -1;
		_putchar('0' + i);
		return (i);
	}
}
