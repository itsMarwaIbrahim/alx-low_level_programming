#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			if (*needle != '\0')
				return (haystack);
			haystack++;
			needle++;
		}
	}
	return (NULL);
}
