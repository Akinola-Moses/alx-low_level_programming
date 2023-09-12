#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable.
 * @d: ptr.
 * @name: Tge name of the dog.
 * @age: it's age.
 * @owner: The owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
