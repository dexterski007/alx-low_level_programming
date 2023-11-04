#include <stddef.h>
#include "dog.h"

/**
 *
 * init_dog - init a dog
 *
 * @d: struct dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: nothing
**/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
