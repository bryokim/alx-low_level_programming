#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar, followed
 * by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char s[9] = "_putchar";
	int i;

	for (i = 0; i < 9 ; i++)
		_putchar(s[i]);

	_putchar('\n');
	return (0);
}
