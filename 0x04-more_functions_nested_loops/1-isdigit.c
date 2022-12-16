/**
 * _isdigit - checks for a digit
 * @c : integer to be checked
 *
 * Description: checks for a digit(0 through 9)
 *
 * Return: 1 if c is a digit
 * 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
