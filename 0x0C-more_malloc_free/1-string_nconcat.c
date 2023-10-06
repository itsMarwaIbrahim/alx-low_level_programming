#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: bytes of s2 that should concatensates to s1
 * Return: pointer - point to a newly allocated space in memory
 *	If if fails return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, full_string;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s2 != '\0' && len2 < n)
	{
		s2++;
		len2++;
	}
	s2 -= len2;
	while (*s1 != '\0')
	{
		s1++;
		len1++;
	}
	s1 -= len1;

	if (n >= len2)
		n = len2;

	full_string = len1 + n;

	concat = (char *)malloc(full_string + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < full_string; i++)
		concat[i] = (i < len1) ? *s1++ : *s2++;
	concat[full_string] = '\0';

	return (concat);
}
