#include "main.h"

int _test_square(int n, int r);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	int beginning = 1;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_test_square(n, beginning));
}

/**
 * _test_square - square root of r
 * @n: integer
 * @r: integer
 * Return: number of square root or -1
 */
int _test_square(int n, int r)
{
	if (n == r * r)
		return (r);
	if (n < r * r)
		return (-1);
	return (_test_square(n, r + 1));
}
