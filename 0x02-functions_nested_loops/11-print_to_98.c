#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n:
 * Return: result
 */
void print_to_98(int n)
{
	for (n = '0'; n <= 98; n++)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		else (n == 98)
			_putchar('n');
		_putchar('\n');
	}
}
