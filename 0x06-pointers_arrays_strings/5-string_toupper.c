/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 *
 * Description: changes all lowercase letters of a string to uppercase
 *
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
