/**
 * _pow_recursion - find power of a number
 * @x: base
 * @y: power to raise to
 *
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y % 2 == 1)
		{
			return (x * _pow_recursion(x, y - 1));
		}
		else
		{
			int z = _pow_recursion(x, y / 2);

			return (z * z);
		}
	}
}
