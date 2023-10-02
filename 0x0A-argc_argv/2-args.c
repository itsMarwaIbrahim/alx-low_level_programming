#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count the number of the arguments
 * @argv: the value of the arguments that have been given
 * Return: print the arguments value/vector
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
