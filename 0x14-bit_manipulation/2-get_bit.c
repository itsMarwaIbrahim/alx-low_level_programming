#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number from which I want to extract the bit
 * @index: the index, starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index > 32) ? (unsigned long int)(-1) : (1 & (n >> index));
}
