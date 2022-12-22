/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Description: encodes a string into 1337
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char c, a[] = "OL_EA__T";

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i] - 'a' + 'A';
		if ( c == 'A' || c == 'E' || c == 'L' || c == 'O' || c == 'T')
		{
			for (j = 0; a[j] != c; j++)
				;
			s[i] = j + '0';
		}
	}
	return (s);
