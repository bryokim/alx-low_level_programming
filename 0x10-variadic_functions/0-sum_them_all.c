#include <stdarg.h>
/**
 * sum_them_all - finds sum of its parameters
 * @n: number of integers to find sum
 *
 * Return:
 * sum of n integers
 * if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list ap;
		int sum, i;

		va_start(ap, n);
		sum = 0;
		i = n;

		while (--i >= 0)
			sum += va_arg(ap, int);

		va_end(ap);
		return (sum);
	}
}
