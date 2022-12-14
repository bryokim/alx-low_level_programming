#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints 10 times the alphabet
 * in lowercase followed by new line
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		char ch = 'a';

		while (ch >= 'a' && ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}

