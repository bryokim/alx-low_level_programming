#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: prints the lowercasealphabet
 * in reverse.
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'z';

	while (islower(ch))
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}

