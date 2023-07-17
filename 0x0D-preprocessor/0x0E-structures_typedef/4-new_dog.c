#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: char
 * @age: float
 * @owner: char
 * Return: d2
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d2;
	
	d2 = malloc(sizeof(dog_t));

	if (d2 == NULL)
		return (NULL);
	d2->name = name;
	d2->age = age;
	d2->owner = owner;
	
	return (d2);
}
