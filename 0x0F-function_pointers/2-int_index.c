#include "function_pointers.h"

/**
 * int_index - searches: for an (integer)
 * @array:
 * @size: the number of elements in the array "array"
 * @cmp: a pointer to the function to be used to compare values
 * Return:
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return index;
		index++;
	}

	return (-1);
}
