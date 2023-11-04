#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - print dog its a descr
 *
 * @d: struct dog
 *
 * Return: nada
**/

void free_dog(dog_t *d)

{
	free(d->name);
	free(d->owner);
	free(d);
}
