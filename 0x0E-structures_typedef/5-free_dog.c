#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog
 * @d: dog
 *
 * Return: Nothing broski it's void what did you expect
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
