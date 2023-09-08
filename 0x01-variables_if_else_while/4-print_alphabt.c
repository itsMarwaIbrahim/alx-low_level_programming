#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f == 'q' || f == 'e')
			continue;
		putchar(f);
	}

	putchar('\n');
	return (0);
}
