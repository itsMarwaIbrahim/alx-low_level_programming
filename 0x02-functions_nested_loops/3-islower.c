#include "main.h"

/**
 * int _islower - Entry point
 *
 * Return: no return
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
