#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
	char letters;
	int lines;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		for (lines = 0; lines <= 9; lines++)
		{
			_putchar(lines);
		}

		_putchar('\n');
	}
}
