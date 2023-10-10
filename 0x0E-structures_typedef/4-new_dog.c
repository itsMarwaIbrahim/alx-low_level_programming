#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates: a (new dog)
 * @name: the dog's name - a string
 * @age: the dog's age - a float number
 * @owner: the dog't owner - a string
 */

int strlen_(char *string)
{
	int length = 0;

	while (*string[length])
		length++;
}

char *strcpy_(char *destination, char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

