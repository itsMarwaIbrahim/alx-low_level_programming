#include <stdio.h>

/**
 * main - start the program from here
 *
 * Return: Always 0 if it is sucess
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
