#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count the numbers of the arguments
 * @argv: the value of the arguments
 * Return: added numbers
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		n = argv[i];
		while (*n)
		{
			if (*n < '0' || *n > '9')
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
