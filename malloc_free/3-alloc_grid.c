#include"main.h"
/**
 * alloc_grid - function
 * @width: variable
 * @height: variable
 * Return: pointer to 2d array, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int *grid;

	if (width <= NULL)
		return (NULL);

	if (height <= NULL)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
				free(grid[h]);

			free(grid);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
