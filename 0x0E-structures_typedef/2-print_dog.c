#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog its a descr
 *
 * @d: struct dog
**/

void print_dog(struct dog *d)

{
	if (d != NULL)
	{
	if (d->name != NULL)
	printf("Name: %s\n", d->name);
	if (d->name == NULL)
	printf("Name: (nil)\n");
	if (d->age != 0)
	printf("Age: %f\n", d->age);
	if (d->age == 0)
	printf("Age: (nil)\n");
	if (d->owner != NULL)
	printf("Owner: %s\n", d->owner);
	if (d->owner == NULL)
	printf("Owner: (nil)\n");
	}
}
