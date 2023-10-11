#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name -  prints: a (name)
 * @name: a pointer to a character to represent our string
 * @f: a function pointer
 * Return: nothing - void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
	else
		return;
}
