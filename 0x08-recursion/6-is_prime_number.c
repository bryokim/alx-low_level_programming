int check_prime(int n, int i);

/**
 * is_prime_number - checks whether n is prime
 * @n: integer
 *
 * Return: 1 if prime or ) if otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (check_prime(n, 2));
}

/**
 * check_prime - checks whether n is prime
 * @n: integer to be checked
 * @i: divisor
 *
 * Return: 1 if n is prime or 0 if otherwise
 */
int check_prime(int n, int i)
{
	if (i <= (n / 2))
	{
		if (i == n)
			return (1);

		if (n % i == 0)
			return (0);
		return (check_prime(n, i + 1));
	}
	return (1);
}
