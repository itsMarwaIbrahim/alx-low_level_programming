#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument passed
 * Return: NULL or pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, length = 0, k = 0;
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
		if (av[i] == NULL || av[i][0] == '\0')
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			concat[k++] = av[i][j];
		concat[k++] = '\n';
	}
	concat[k] = '\0';
	return (concat);
}
