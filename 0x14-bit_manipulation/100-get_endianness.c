#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: an integer value, returns 1 if the system is little-endian,
 *	0 if the system is big-endian
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *pointer;

	pointer = (char *) &value;

	return (*pointer);
}
