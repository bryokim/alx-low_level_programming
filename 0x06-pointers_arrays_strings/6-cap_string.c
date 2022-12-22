/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Description: capitalizes all words of a string based on
 * separators provided
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 'a' + 'z';

		switch (s[i])
		{
			case ' ': case '\t': case '\n': case ',': case ';':
			case '.': case '!': case '?': case '"': case '(':
			case ')': case '{': case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 'a' + 'A';
			default:
				continue;
		}
	}
	return (s);
}
