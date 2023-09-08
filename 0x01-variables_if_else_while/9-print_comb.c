#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
