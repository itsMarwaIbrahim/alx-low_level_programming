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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > 48 && *argv[i] < 58)
		{
			sum += atoi(argv[i]);
		}
		if (!isdigit((unsigned char)*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
