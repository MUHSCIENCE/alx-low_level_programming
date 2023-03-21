#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the variables of type struct dog
 * @d: pointer containing struct dog
 * @name: member to be initialized
 * @age: member to be initialized
 * @owner: member to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
