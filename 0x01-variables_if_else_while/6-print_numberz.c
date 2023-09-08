#include <stdio.h>

/**
 * main - the start point of the program
 *
 * Return: zero if success or non-zero if fail
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}

