#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *		on each element of an array
 * @array:
 * @size: the size of the array
 * @action: a pointer to the function I will use
 * Return: nothing - void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (action != NULL)
	{
		while (index < size)
		{
			action(array[index]);
			index++;
		}
	}
	else
		return;
}
