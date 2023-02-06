#include "main.h"
#include <unistd.h>

/**
 * print_binary - print binary representation of number
 * @n: number to print in binary format
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int b;

	b = n & 1;
	n >>= 1;

	if (n)
		print_binary(n);
	_putchar(b + '0');
}

/**
 * _putchar - print a character to the stdout.
 * @c: character to print
 *
 * Return: number of bytes written.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
