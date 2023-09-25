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
	int i = 0, j = 0;
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] != '\0')
		{
			i = i - j + 1;
			j = 0;
		}
		else
			return (haystack + i -j);
	}
	return (NULL);
}
