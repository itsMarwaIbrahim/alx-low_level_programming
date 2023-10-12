#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing - void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list count;

	if (separator == NULL)
		return;

	va_start(count, n);

	while (index < n)
	{
		printf("%d", va_arg(count, int));
		if (separator && index < n -1)
			printf("%s", separator);
		index++;
	}

	printf("\n");

	va_end(count);
}
