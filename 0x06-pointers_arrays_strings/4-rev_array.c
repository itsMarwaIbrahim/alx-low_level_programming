#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @n: the number of elements of the array
 * @a: an array of integers
 * Return: 0 if success
 */
void reverse_array(int *a, int n)
{
	int loop = 0;
	int j;

	for (; loop < (n / 2); loop++)
	{
		j = a[loop];
		a[loop] = a[n - loop - 1];
		a[n - loop - 1] = j;
	}
}
