/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Description: compares two strings
 *
 * Return: 0 if both strings are identical
 * 15 if s1 is greater than s2(alphabetically)
 * -15 if s1 is less than s2(alphabetically)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
