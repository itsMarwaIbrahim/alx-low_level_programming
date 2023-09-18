#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: the integer
 * @*n: first
 * @*b: second
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
