#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strlen_ - count the length of a string
 * @string: the string to count its length
 */

int strlen_(char *string)
{
	int length = 0;

	while (string[length])
		length++;
	return (length);
}

/**
 * strcpy_ - copy the source to the destination string
 * @destination: the destination string
 * @source: the source
 */
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

/**
 * new_dog - creates: a (new dog)
 * @name: the dog's name - a string
 * @age: the dog's age - a float number
 * @owner: the dog't owner - a string
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int lenName, lenOwn, index = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	lenName = strlen_(name);
	(*new_dog).name = malloc(lenName + 1);
	if ((*new_dog).name == NULL)
		return (NULL);

	while (index < lenName)             /* this loop replacing the strcpy function */
	{
		(*new_dog).name[index] = name[index];
		index++;
	}
	(*new_dog).name[index] = '\0';

	(*new_dog).age = age;
	lenOwn = strlen_(owner);
	(*new_dog).owner = malloc(lenOwn + 1);
	if ((*new_dog).owner == NULL)
		return (NULL);

	strcpy_((*new_dog).owner, owner);
	(*new_dog).owner[lenOwn] = '\0';

	return (new_dog);
}
