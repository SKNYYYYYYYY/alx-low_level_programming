#include "dog.h"
#include<stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints dogs struct dffdd fdfd dfd
 * @d: pointer to the struc tfdd dssd sdsdsd fdfd
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
