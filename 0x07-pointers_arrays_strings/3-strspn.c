#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: the bytes that accepted
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, count = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept [j])
			return count;
		i++;
		count++;
	}
	return (count);
}
