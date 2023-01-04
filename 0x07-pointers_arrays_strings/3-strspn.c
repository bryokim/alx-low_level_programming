/**
 * _strspn - find number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: string
 * @accept: string
 *
 * Return: number of bytes in initial segment os that consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *s1;

	for (count = 0; *s != '\0'; s++)
	{
		for (s1 = accept; ; s1++)
		{
			if (*s == *s1)
			{
				count++;
				break;
			}
			else if (*(s1 + 1) == '\0')
			{
				return (count);
			}
		}
	}
	return (count);
}
