#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */
void rev_strin(char *s)
{
	int length = 0;
	int end, word;
	char temp[50];

	for (end = 0; end < length; end++)
	{
		for (word = 0; word < length; word++, end++)
		{
			if (s[end] == ' ' || s[end] == '.')
				break;
			temp[word] = s[end];
		}
		for (; word > 0; word--)
			s[end - word - 1] = temp[word];
	}
}
