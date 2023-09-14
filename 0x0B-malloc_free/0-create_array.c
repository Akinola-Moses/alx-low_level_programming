#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Create an array of chars.
 * @size : The size of the array.
 * @c: The cahracter.
 *
 * Return: pointer to the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *ca;
	unsigned int idx = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ca = malloc(sizeof(char) * (size + 1));

	if (ca == NULL)
	{
		return (NULL);
	}

	for (; idx < size; idx++)
	{
		ca[idx] = c;
	}

	ca[size] = '\0';
	return (ca);
}
