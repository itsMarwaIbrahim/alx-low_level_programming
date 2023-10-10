#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type: (struct dog)
 * @d: structure name
 * @name: a string
 * @age: a float number
 * @owner: a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
