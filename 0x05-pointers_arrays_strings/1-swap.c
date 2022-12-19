/**
 * swap_int - swaps values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Description: swaps the values of integers
 * pointed to by a and b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
