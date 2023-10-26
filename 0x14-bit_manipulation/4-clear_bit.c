#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to an unsigned long int variable
 * @index: bit position to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bitMask = ~(1 << index);

	if (index >= 32)
		return (-1);

	else
	{
		(*n) = (*n) & bitMask;
		return (1);
	}
}
