#include <stdio.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, args;

	args = 0;
	for (i = 1; argv[i] != argv[argc]; i++)
		args++;
	printf("%d\n", args);
	return (0);
}
