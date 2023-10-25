#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int firstCount = 0, secondCount;

	while (firstCount < 9)
	{
		secondCount = firstCount + 1;
		while (secondCount < 10)
		{
			putchar(firstCount + 48);
			putchar(secondCount + 48);
			if (firstCount != 8 || secondCount != 9)
			{
				putchar(',');
				putchar(' ');
			}
			secondCount++;
		}
		firstCount++;
	}
	putchar('\n');
	return (0);
}
