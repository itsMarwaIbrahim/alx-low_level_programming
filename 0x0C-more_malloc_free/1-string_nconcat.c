#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1:
 * @s2:
 * @n:
 * Return: pointer - point to a newly allocated space in memory
 *	If if fails return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *concat, *ptr_s2 = s2; 

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s2 != '\0')
	{
		s2++;
		len2++;
	}
	while (*s1 != '\0')
	{
		s1++;
		len1++;
	}
	if (n >= len2)
		n = len2;

	concat = (char *)malloc(n + len1 + 1);
	if (concat == NULL)
		return (NULL);

	while (*ptr_s2 != '\0')
	{
		*s1 = *ptr_s2;
		s1++;
		ptr_s2++;
	}
	*s1 = '\0';

	if (ptr_s1 == NULL)
		return (NULL);

	

	return (concat);
}
