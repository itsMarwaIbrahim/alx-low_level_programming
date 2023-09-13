#include "main.h"

/**
 * times_table - 9 times table
 * @x: first
 * @y: second
 * @z: third
 * Return: nothing
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar(44);
			_putchar(32);
			z = x * y;
			if (z <= 9)
				_putchar(32);
			else
				_putchar
		}
		_putchar('\n');
	}
}
