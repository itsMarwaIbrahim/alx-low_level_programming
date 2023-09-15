#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int j;

	if ( n > 0)
	{
		for (n = 0; n < 10; n++) 
		{
			for (j = 0; j < n; j++) 
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}	
