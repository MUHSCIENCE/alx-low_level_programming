#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the memory containing struct dog
 * @d: struct dog being freed
 */
void free_dog(dog_t *d)
{
	free(d);
}
