#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'a';

	while (islower(ch))
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
