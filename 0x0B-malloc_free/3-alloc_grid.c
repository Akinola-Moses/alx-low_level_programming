#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *alloc_grid - Create 2D array using malloc to allocate memory.
 * @height:Grid's height.
 * @width: Grid's width.
 *
 * Return: The pointer or NULL.
 */

int **alloc_grid(int width, int height)
{
	int x = 0, y = 0;
	int **ptp;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	ptp = (int **)malloc(sizeof(int *) * height);

	if (ptp == NULL)
	{
		return (NULL);
	}

	for (; x < height; x++)
	{
		ptp[x] = (int *)malloc(sizeof(int) * width);
		if (ptp[x] == NULL)
		{
			for (; y < x; y++)
			{
				free(ptp[y]);
			}
			free(ptp);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			ptp[x][y] = 0;
		}
	}
	return (ptp);
}
