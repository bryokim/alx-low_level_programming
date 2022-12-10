#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: prints alphabet in lowercase
 * and then in uppercase, followed by a new
 * line.
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (islower(ch))
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';

	while (isupper(ch))
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
