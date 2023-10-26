#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to the string of characters (which represent
 *	the binary number
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int traverseChar;
	unsigned int sum = 0;

	if (!b)
		return (0);

	for (traverseChar = 0; *b != '\0'; traverseChar++, b++)
	{
		if (*b != 48 && *b != 49)
			return (0);
		sum = sum << 1; /* instead of multiply a value by a power of 2 */
		sum = sum | (*b - 48);
	}

	return (sum);
}
