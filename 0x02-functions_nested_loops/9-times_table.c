#include <stdio.h>

/**
 * times_table - 9 times table
 *
 * Description: prints the 9 times table
 * starting with 0
 *
 * Return: none
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (j == 0)
				printf("%d,", j);
			else if (j < 9)
				printf("%3d,", i * j);
			else
				printf("%3d\n", i * j);
		}
	}
}
