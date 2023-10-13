#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int index = 0;
	char *charPtr;
	va_list anything;

	va_start(anything, format);
	while (format && format[index] != '\0')
	{
		switch (format[index++])
		{
			case 's':
					charPtr = va_arg(anything, char *);
					if (!charPtr)
						charPtr = "(nil)";
					printf("%s", charPtr);
					break;
			case 'i':
					printf("%d", va_arg(anything, int));
					break;
			case 'c':
					printf("%c", va_arg(anything, int));
					break;
			case 'f':
					printf("%f", va_arg(anything, double));
					break;
			default:
				continue;
		}
		if (format[index])
			printf(", ");
	}
	printf("\n");
	va_end(anything);
}
