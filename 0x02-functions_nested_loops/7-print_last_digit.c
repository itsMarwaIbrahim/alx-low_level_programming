#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @w: the intger
 * Return: the value of the last digit
 */
int print_last_digit(int w)
{
	int lastd = w % 10;

	if (lastd < 0)
	{
		_putchar(-lastd + '0');
		return (-lastd);
	}
	else
	{
		_putchar(lastd + '0');
		return (lastd);
	}
}
