#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: prints all lowercase letters.
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
	putchar('\n');

	return (0);
}
