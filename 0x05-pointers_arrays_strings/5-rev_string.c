#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int i, count = 0;
	char temp;
	
	for (i = 0; s[i] != '\0'; i++)
		count++;
	i = 0;
	while (i < count / 2)
	{
		temp = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = temp;
		i++;
	}
}
