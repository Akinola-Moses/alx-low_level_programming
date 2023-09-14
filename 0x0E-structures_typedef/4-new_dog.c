#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create new dog.
 * @name: Its name.
 * @age: Its age.
 * @owner: Its owner.
 * Return: new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int idx, id;
	int l1 = 0, l2 = 0;


	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (!new_dog)
	{
		return (NULL);
	}
	while (name[l1] != '\0')
	{
		l1++;
	}
	while (owner[l2] != '\0')
	{
		l2++;
	}
	new_dog->name = (char *)malloc(l1 + 1);
	new_dog->owner = (char *)malloc(l2 + 1);
	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (idx = 0; idx < l1; idx++)
	{
		new_dog->name[idx] = name[idx];
	}
	for (id = 0; id < l2; id++)
	{
		new_dog->owner[id] = owner[id];
	}
	new_dog->age = age;
	return (new_dog);
}
