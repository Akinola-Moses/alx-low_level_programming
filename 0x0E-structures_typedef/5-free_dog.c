#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog.
 * @d: ptr to dog.
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
