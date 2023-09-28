#include "main.h"

/**
 * _true_prime - return the prime number
 * @n: integer
 * @t: second integer
 * Return: 1 if prime, otherwise return 0
 */
int _true_prime(int n, int t)
{
	if (t <= 1)
		return (1);
	if ((n % t) == 0)
		return (0);
	return (_true_prime(n, (t - 1)));
}

/**
 * is_prime_number - returns 1 if it's prime number, otherwise return 0
 * @n: integer
 * Return:
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_true_prime(n, (n - 1)));
}
