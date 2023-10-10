#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure have a different elemtents
 * @name: a string - the dog's name
 * @age: a float number - the dog's age
 * @owner: a string - the dog owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
