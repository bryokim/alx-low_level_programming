#include <stdio.h>

/**
 * jack_bauer - print every minute
 *
 * Description: prints every minute of the day
 *
 * Return: none
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0 ; hour < 24 ; hour++)
	{
		for (min = 0; min < 60 ; min++)
			printf("%02d:%02d\n", hour, min);
		min = 0;
	}
}
