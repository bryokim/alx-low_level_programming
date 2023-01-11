#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings on success
 * or NULL on failure
 */
char **strtow(char *str)
{
	char **strarr;
	int word_count, i, j, k, z;

	if (str == NULL || (strcmp(str, "") == 0))
		return (NULL);

	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}
	if (word_count == 0)
		return (NULL);

	strarr = malloc((word_count + 1) * sizeof(char *));
	if (!strarr)
		return (NULL);

	for (i = k = 0; i < word_count; i++)
	{
		for (z = k; str[z] != '\0'; z++)
		{
			if (str[z] == ' ')
				k++;
			if (str[z] != ' ' && (str[z + 1] == ' ' || str[z + 1] == '\0'))
			{
				strarr[i] = malloc((z - k + 2) * sizeof(char));
				if (!strarr[i])
				{
					while (i > 0)
						free(strarr[--i]);
					free(strarr);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= z; k++, j++)
			strarr[i][j] = str[k];
		strarr[i][j] = '\0';
	}
	strarr[i] = NULL;
	return (strarr);
}
