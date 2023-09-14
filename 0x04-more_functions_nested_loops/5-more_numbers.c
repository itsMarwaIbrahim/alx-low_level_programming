#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int rows;
	int numbers;

	for (rows = 0; rows <= 9; rows++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
				_putchar(48 + (numbers / 10));
			_putchar(48 + (numbers % 10));
		}
		_putchar('\n');
	}
}
