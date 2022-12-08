#include <stdio.h>

/**
 * main - prints size of different types
 *
 * Description: prints sizes of char, int, 
 * long int, long long int and float.
 *
 * Return: 0
 */

int main()
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
