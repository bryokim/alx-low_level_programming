#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	i = n;

	while (--i >= 0)
	{
		if (separator && i != 0)
			printf("%d%s", va_arg(ap, int), separator);
		else if (!separator && i != 0)
			printf("%d", va_arg(ap, int));
		else if (i == 0)
			printf("%d\n", va_arg(ap, int));
	}
}

