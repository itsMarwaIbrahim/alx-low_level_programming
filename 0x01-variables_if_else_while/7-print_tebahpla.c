#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success and non-zero for fail
 */
int main(void)
{
	int t = 'z';

	while (t >= 'a');
	{
		putchar(t);
		t--;
	}

	putchar('\n');
	return (0);
}
