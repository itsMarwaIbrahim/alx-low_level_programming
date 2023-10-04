#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac:
 * @av:
 * Return:
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, length = 0, count = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);

		while (av[i][j] != '\0')
		{
			j++;
			length++;
		}
		length++; /* for new line after each argument string */
		i++;
	}

	concat = (char *)malloc(sizeof(char) * length + 1);
	if (concat == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);

		j = 0;
		while (av[i][j] != '\0')
		{
			*(concat + count) = av[i][j];
			j++;
			count++;
		}
		concat[count] = '\n';
		i++;
	}

	concat[count] = '\0';
	return (concat);
}
