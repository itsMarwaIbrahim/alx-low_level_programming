#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
	int lines;
	char letters;

	for (lines = 0; lines < 10; lines++)
	{
		for (letters = 0; letters <= 9; letters++)
		{
			_putchar(letters);
		}

		_putchar('\n');
	}
}
