#include <stdio.h>

/**
 * print_times_table - prints times table
 * @n : integer thet determines the times table
 *
 * Description: prints the n times table
 * if n <= 15 and n >= 0
 * starting with 0
 *
 * Return: none
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0; j < n ; j++)
			{
				if (j == 0)
					printf("%d,", j);
				else if (j < (n - 1))
					printf("%3d,", i * j);
				else
					printf("%3d", i * j);
			}
		}
	}
}
