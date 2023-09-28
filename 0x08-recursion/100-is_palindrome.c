#include "main.h"

int true_palindrome(char *s, int first, int last)
{
	if (first <= last)
		return (1);
	if (s[first] == s[last])
		return (1);
	return true_palindrome(s, first - 1, last + 1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return:
 */
int is_palindrome(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = length + is_palindrome(s + 1);
		length++;
	}
	if (length == 0 || length == 1)
		return (1);
	return true_palindrome(s, 0, length - 1);
}
