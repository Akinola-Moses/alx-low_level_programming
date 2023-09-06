#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Check for the lenght.
 * @s: The string.
 *
 * Return: l.
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}


/**
 * argstostr - Concatenates arguments.
 * @ac: count.
 * @av: vector.
 *
 * Return: pointer or NULL.
 */

char *argstostr(int ac, char **av)
{
	int l1 = 0, l2 = 0;
	int y;
	int idx = 0, suml = 0;
	char *res;

	if (ac == 0)
	{
		return (NULL);
	}

	if (av == NULL)
	{
		return (NULL);
	}

	for (l1 = 0; l1 < ac; l1++)
	{
		suml = suml + _strlen(av[l1]) + 1;
	}

	res = (char *)malloc(suml + 1);

	if (res == NULL)
	{
		return (NULL);
	}

	for (l1 = 0; l1 < ac; l1++)
	{
		l2 = _strlen(av[l1]);

		for (y = 0; y < l2; y++)
		{
			res[idx] = av[l1][y];
			idx++;
		}
		res[idx] = '\n';
		idx++;
	}
	res[idx] = '\0';
	return (res);
}
