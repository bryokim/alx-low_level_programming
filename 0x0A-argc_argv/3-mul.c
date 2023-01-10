#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints result
 * @argc: argument count
 * @argv: argument vector containing numbers to be multiplied
 *
 * Return: 0 if multiplication is done
 * 1 if an error occurs(program does not receive right number of arguments)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
}
