/**
 * _abs - find absolute value
 * @c : integer to be computed
 *
 * Description: computes the absolute
 * value of an integer
 *
 * Return: Absolute value of c
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
