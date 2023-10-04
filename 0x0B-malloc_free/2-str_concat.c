#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if failure, or pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1 = 0, len_s2 = 0, cpy_s1 = 0, cpy_s2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	concat = (char *)malloc(len_s1 + len_s2 + 1);
	if (concat == NULL)
		return (NULL);

	while (cpy_s1 < len_s1)
	{
		*concat = *s1;
		concat++;
		s1++;
		cpy_s1++;
	}

	cpy_s2 = cpy_s1;
	while (cpy_s2 < len_s2 + len_s1)
	{
		*concat = *s2;
		concat++;
		s2++;
		cpy_s2++;
	}

	*concat = '\0';

	return (concat - len_s1 - len_s2);
}
