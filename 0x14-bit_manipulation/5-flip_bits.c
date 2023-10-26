#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 *      to flip to get from one number to another
 * @n: represents the first number
 * @m: represents the second number
 * Return: an unsigned int that represents the number of bits
 *      that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flippedBitsCount, totalCount = 0;

	for (flippedBitsCount = n ^ m; flippedBitsCount; flippedBitsCount >>= 1)
		totalCount = totalCount + (flippedBitsCount & 1);

	return (totalCount);
}
