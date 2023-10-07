#include "main.h"

/**
 * times_table - 9 times table
 * @x: first
 * @y: second
 * Return: nothing
 */
void times_table(void)
{
	int x = 0, y;

	while (x <= 9)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar(44);
			_putchar(32);

			if (x * y <= 9)
				_putchar(32);
			else
				_putchar(x * y / 10 + 48);
			_putchar (x * y % 10 + 48);

		}
		x++;
		_putchar('\n');
	}
}
