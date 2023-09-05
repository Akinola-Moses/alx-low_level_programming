#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Free 2E memoru previously allocated.
 * @grid: The grid in question.
 * @height: It's height.
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL)
	{
		return;
	}

	for (; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);

}
