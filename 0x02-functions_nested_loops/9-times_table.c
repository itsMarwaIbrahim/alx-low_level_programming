#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: nothing
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; x < 10; y++)
		{
			z = y * x;
			_putchar(z);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
