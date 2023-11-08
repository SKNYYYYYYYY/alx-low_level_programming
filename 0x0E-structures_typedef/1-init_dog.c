#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - fxn that initializes the elements of dog
 * Return: always 0
 * @d: pointer to struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: whoever the dog belongeth to
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
