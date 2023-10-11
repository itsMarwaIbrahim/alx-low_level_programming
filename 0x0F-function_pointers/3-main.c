#include "3-calc.h"

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

	opera = (argv[2]);

	if (opera == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(opera)(num1, num2));
	return (0);
}
