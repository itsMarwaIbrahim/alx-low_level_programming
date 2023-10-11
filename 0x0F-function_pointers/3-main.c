#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - the entry point
 * @argc: passed argument's numbers
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *opera;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opera = (argv[2]);

	if (get_op_func(opera) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(opera, "%") == 0 || strcmp(opera, "/") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opera)(num1, num2));
	return (0);
}
