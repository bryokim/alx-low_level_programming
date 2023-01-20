#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int print(char t, va_list ap);

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	size_t i, j;
	va_list ap;

	va_start(ap, format);

	i = 0;
	while (format && i < strlen(format))
	{
		j = print(format[i], ap);

		if (j && i != (strlen(format) - 1))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print - prints one argument at a time from ap that matches t
 * @t: format
 * @ap: argument list
 *
 * Return:
 * 1 if format t is valid
 * 0 if format t is invalid
 */
int print(char t, va_list ap)
{
	char *s;

	switch (t)
	{
	case 'c':
		printf("%c", va_arg(ap, int));
		return (1);
	case 'i':
		printf("%d", va_arg(ap, int));
		return (1);
	case 'f':
		printf("%f", va_arg(ap, double));
		return (1);
	case 's':
		s = va_arg(ap, char *);
		if (s)
		{
			printf("%s", s);
			return (1);
		}
		printf("(nil)");
		return (1);
	default:
		return (0);
	}
}
