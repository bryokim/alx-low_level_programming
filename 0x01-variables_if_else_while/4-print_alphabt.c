#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 * except q and e
 * followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (islower(ch))
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
