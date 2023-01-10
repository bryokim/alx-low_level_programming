/**
 * _strlen - finds length of a string
 * @s: string to find length
 *
 * Description: finds and returns lenth of
 * string s
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
