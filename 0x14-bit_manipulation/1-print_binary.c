#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number for which you want to print the binary representation
 * Return: void - nothing
 */
void print_binary(unsigned long int n)
{
	(n > 1) ? print_binary(n >> 1) : (void)0;
	_putchar((n & 1) + 48);
}
