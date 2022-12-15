#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int nums[] = {a, b, c};
	int i, largest = 0;

	for (i = 0; i < 3 ; i++)
	{
		if (nums[i] > largest)
			largest = nums[i];
	}

	return (largest);
}
