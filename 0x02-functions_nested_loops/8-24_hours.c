#include <stdio.h>

void jack_bauer(void)
{
	int min, hour;

	for (hour = 0 ; hour < 24 ; hour ++)
	{
		for (min = 0; min < 60 ; min++)
			printf("%2d:%2d\n", hour, min);
		min = 0;
	}
}
