#include "3-calc.h"

/**
 * op_add - finds sum of a and b
 * @a: integer
 * @b: integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference of a and b
 * @a: integer
 * @b: integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds product of a and b
 * @a: integer
 * @b: integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds result of division of a by b
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Quotient if b is not 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find remainder of division of a by b
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Remainder of a / b if b != 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
