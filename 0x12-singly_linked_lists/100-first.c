#include "lists.h"

void print_this_first(void) __attribute__ ((constructor));

/**
 * print_this_first - prints a phrase before the main function is executed
 * Return: nothing - void
 */
void print_this_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
