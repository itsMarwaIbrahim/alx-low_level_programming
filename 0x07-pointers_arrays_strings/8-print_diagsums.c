#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: the pointer to the matrix
 * @size: the size of the matrix
 * Return:
 */
void print_diagsums(int *a, int size)
{
	int i, first = 0, second = 0;

	for (i = 0; i < size; i++)
	{
		first = first + a[i + size * i];
		second = second + a[(size - 1 - i) + size * i];
	}
	printf("%d, %d\n", first, second);
}
