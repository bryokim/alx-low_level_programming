#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return : none
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch >= 'a' && ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
