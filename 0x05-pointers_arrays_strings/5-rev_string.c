#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */
void rev_strin(char *s)
{
	int i;
	int len = 0;
	int mid = len / 2;
	char tmp;

	for (i = 0; i < mid; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
