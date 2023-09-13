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
		_putchar('0');
		for (y = 1; x < 10; y++)
		{
			_putchar(',');
			_putchar(' ');
			z = x * y;
			if (z < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		_putchar('\n');
		}
	}
}	