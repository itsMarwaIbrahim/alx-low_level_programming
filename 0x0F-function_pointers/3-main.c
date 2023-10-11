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
	
	if (argv[2][1] == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	opera = (argv[2]);

	if (get_op_func(opera) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num2 = atoi(argv[3]);
	if (*argv[3] == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (*argv[1] == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opera)(num1, num2));
	return (0);
}
