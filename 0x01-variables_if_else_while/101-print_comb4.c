#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: always 0
 */
int main(void)
{
	int first = 0, second, third, flag = 1;

	while (first < 10)
	{
		second = first + 1;
		while (second < 10)
		{
			for (third = second + 1; third < 10; third++)
			{
				if (!flag)
				{
					putchar(',');
					putchar(' ');
				}
				flag = 0;
				putchar(48 + first);
				putchar(48 + second);
				putchar(48 + third);
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
