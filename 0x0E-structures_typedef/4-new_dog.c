#include <stddef.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - string length
 *
 * @str: string
 *
 * Return: intger
**/

int _strlen(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	i++;

	return (i);
}

/**
 * _strcpy - str copy
 *
 * @src: source
 * @dest: destination
 *
 * Return: char
**/

char *_strcpy (char *src, char *dest)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - new dog structure
 *
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: pointer to new dog
**/

dog_t *new_dog(char *name, float age, char *owner)

{
	int n, m;

	dog_t *new_dog;

	n = _strlen(name);
	m = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	return (NULL);

	new_dog->name = malloc(n);
	new_dog->owner = malloc(m);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
