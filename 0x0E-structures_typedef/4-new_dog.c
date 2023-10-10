#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strlen_ - count the length of a string
 * @string: the string to count its length
 * Return: length
 */

int strlen_(char *string)
{
	int length = 0;

	while (string[length] != '\0')
		length++;
	return (length);
}

/**
 * strcpy_ - copy the source to the destination string
 * @destination: the destination string
 * @source: the source
 * Return: destination
 */
char *strcpy_(char *destination, char *source)
{
	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
	return (destination);
}

/**
 * new_dog - creates: a (new dog)
 * @name: the dog's name - a string
 * @age: the dog's age - a float number
 * @owner: the dog't owner - a string
 * Return: a pointer if it success or NULL if if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int lenName, lenOwn;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	lenName = strlen_(name);
	(*new_dog).name = malloc(lenName + 1);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy_((*new_dog).name, name);

	(*new_dog).age = age;

	lenOwn = strlen_(owner);
	(*new_dog).owner = malloc(lenOwn + 1);
	if ((*new_dog).owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy_((*new_dog).owner, owner);

	return (new_dog);
}
