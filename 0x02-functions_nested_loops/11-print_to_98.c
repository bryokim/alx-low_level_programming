#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n : integer to start printing
 *
 * Description: prints all natural
 * numbers from n to 98
 *
 * Return : none
 */

void print_to_98(int n)
{
	for ( ; n < 98 ; n++)
		printf("%d, ", n);

	for ( ; n < 98 ; n--)
		printf("%d, ", n);

	printf("%d\n", 98);
}
