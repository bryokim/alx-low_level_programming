/**
 * reverse_array - reverses an integer array
 * @a: integer array to be reversed
 * @n: number of elements in array
 *
 * Description: reverses the content of an array of integers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, lo, hi;

	hi = n - 1;
	for (lo = 0; lo < hi; lo++, hi--)
	{
		temp = a[lo];
		a[lo] = a[hi];
		a[hi] = temp;
	}
}
