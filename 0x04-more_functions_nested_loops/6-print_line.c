#include "main.h"


/**
 * print_line - draws a straight line in the terminal
 * @n: first
 * @x: second
 * Return: nothing
 */
void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			_putchar(95);
			x++;
		}
	}
	_putchar('\n');
}
