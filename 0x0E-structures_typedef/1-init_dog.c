#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: pointer
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
