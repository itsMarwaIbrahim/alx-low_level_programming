#include "function_pointers.h"

/**
 * int_index - searches: for an (integer)
 * @array: a pointer to to pass arrays to the function
 * @size: the number of elements in the array "array"
 * @cmp: a pointer to the function to be used to compare values
 * Return: If no element matches, return -1
 *	If size <= 0, return -1
 *	the index of the first element for 
 *		which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		while (index < size)
		{
			if (cmp(array[index]) != 0)
				return index;
			index++;
		}
	}

	return (-1);
}
