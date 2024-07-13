#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - function
 * @grid: variable
 * @height: variable
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
