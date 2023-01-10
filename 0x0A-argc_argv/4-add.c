#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector program name and including numbers to be added
 *
 * Return: 0 if no error occurs
 * 1 if one of the numbers passed contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int i, sum, num;

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (!num)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		print("%d\n", sum);
	}
	return (0);
}
