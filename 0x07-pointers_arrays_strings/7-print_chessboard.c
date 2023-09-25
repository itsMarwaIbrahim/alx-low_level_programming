#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return:
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i <= 7)
	{
		for (j = 0; j <= 7; j++)
			_putchar(a[i][j]);
		i++;
		_putchar('\n');
	}
}
