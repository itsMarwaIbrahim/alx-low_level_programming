#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: the number of parameters
 * Return: sum of all the passed numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int index = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	
	while (index < n)
	{
		sum += va_arg(numbers, int);
		index++;
	}

	va_end(numbers);

	return (sum);
}
