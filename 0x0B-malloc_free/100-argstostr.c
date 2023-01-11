#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, k;
	size_t sum, j;

	size_t char_count(int ac, char **av);

	if (ac == 0 || av == NULL)
		return (NULL);

	sum = char_count(ac, av);
	str = malloc((sizeof(char) * sum) + ac + 1);
	if (!str)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}

/**
 * char_count - count number of characters in the arguments passed
 * @ac: argument count
 * @av: argument vector
 *
 * Return: total number of aharacters in arguments
 */
size_t char_count(int ac, char **av)
{
	size_t sum;

	sum = 0;
	for ( ; ac != 0; ac--)
		sum += strlen(av[ac - 1]);
	return (sum);
}
