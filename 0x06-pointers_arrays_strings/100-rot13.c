/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Description: encodes a string using rot13
 *
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
			i++;
		}

		if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] = s[i] - 13;
	}
	return (s);
}
