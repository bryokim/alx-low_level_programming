/**
 * _isupper - checks for uppercase character
 * @c : character to be checked
 *
 * Description: checks for uppercase character
 *
 * Return: 1 if c is uppercas
 * 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
