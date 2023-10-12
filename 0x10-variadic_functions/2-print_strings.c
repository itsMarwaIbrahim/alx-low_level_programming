#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing - void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	char *ptr;
	va_list strings;

	va_start(strings, n);

	while (index < n)
	{
		ptr = va_arg(strings, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (separator && index < n - 1)
			printf("%s", separator);
		index++;
	}

	printf("\n");
	va_end(strings);
}
