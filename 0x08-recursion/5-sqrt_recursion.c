int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - check if n has natural square root
 * @n: integer
 *
 * Return: 1 if n has natural square root, 0 if otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function for _sqrt_recursion
 * @n: integer
 * @i: divisor
 *
 * Return: 1 if n has natural square root, 0 otherwise
 */
int find_sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);

	if (i <= (n / 2))
		return (find_sqrt(n, i + 1));

	return (-1);
}
