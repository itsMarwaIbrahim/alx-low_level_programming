#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @b: beginning or start
 * Return: b
 */
char *string_toupper(char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] >= 'a' && b[i] <= 'z')
			b[i] = b[i] - 32;
		i++;
	}
	return (b);
}
