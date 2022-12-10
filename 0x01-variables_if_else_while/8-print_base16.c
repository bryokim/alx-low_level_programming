#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers
 * of base 16 in lowercase.
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = '0';

	while (isdigit(ch))
	{
		putchar(ch);
		ch++;
	}
	ch = 'a';

	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
