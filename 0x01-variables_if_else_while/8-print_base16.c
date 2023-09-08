#include <stdio.h>

/**
 * main - Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int r;
	char m;

	for (r = 0; r < 10; r++)
		putchar(r + '0');

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');
	return (0);
}
