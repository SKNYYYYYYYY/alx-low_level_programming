#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: ");
		if (d->age)
		{
			printf("%f\n", d->age);
		}
		else
		{
			d->age = 0;
			printf("%f\n", d->age);
		}
		printf("Owner: ");
		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
