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
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++; /* for new line after each argument string */
	}
	concat = (char *)malloc(sizeof(char) * length + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (i = 0; av[i][j] != '\0'; j++)
			concat[count++] = av[i][j];
		concat[count++] = '\n';
	}
	concat[count] = '\0';
	return (concat);
}
