#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of
 * base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
