#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point.
 *
 * Description: prints last digit of the number
 * stored in the variable n
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if (lastDigit == 0)
		printf("and is zero\n");
	else
		printf("and is less than 6 and not zero\n");

	return (0);
}
