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

	for (i = 1, args = 0; argv[i] != argv[argc]; i++, args++)
		;
	printf("%d\n", args);
	return (0);
}
