#include "main.h"

/**
 * leet - encodes a string
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i = 0, j;
	char letters[] = {"AEOTLaeotl"};
	char numbers[] = {"4307143071"};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
		i++;
	}
	return (str);
}
