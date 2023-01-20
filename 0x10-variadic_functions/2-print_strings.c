#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	i = n;

	while (--i >= 0)
	{
		s = va_arg(ap, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
