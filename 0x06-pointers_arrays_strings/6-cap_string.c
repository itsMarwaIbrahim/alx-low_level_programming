#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @string: a string
 * Return: the pointer to the string
 */
char *cap_string(char *string)
{       
	char symbols[13] = {']', '[', ')', '(', '\"', '?', '!', '.', ';', ',', '\n', '\t', ' '};
	int iteration = 0, i = 0;

	while (*string != '\0')
	{
		if (*string == '.' && *string == ' ') /* this section represent the toupper function */
		{
			if (*(string + 1) >= 97 && *(string + 1) <= 122)
				*(string + 1) -= 32;
		}

		for (iteration = 0; iteration < 13; iteration++)	
		{
			if (string[i] == symbols[iteration] && string[i + 1] >= 97 && string[i + 1] <= 122)
				string[i + 1] = string[i + 1] - 32;
		}
		string++;
	}

	return (string);
}
