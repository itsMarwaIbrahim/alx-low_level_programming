#include "main.h"

/**
 * _islower - Entry point
 *@c: check that carachter
 * Return: no return
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
