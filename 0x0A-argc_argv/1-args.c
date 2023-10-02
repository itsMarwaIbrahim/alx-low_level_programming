#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count the numbers
 * @argv: argument vector
 * Return: the number of arguments
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
