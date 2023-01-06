int check_palindrome(char *s, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check whether string is a palindrome
 * @s: string
 *
 * Return: 1 If is palindrome or 0 if otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	else
		return (check_palindrome(s, len));
}

/**
 * check_palindrome - helper function for is_palindrome
 * @s: string
 * @len: length of string
 *
 * Return: 1 if is palindrome or 0 if otherwise
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));
	else
		return (0);
}

/**
 * _strlen_recursion - find length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
