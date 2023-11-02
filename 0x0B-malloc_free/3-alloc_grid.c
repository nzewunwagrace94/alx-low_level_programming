#include "main.h"

/**
 * **alloc_grid - 2 dimentional array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **alloc_grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc_grid = malloc(sizeof(int *) * height);

	if (alloc_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		alloc_grid[i] = malloc(sizeof(int) * width);

		if (alloc_grid[i] == NULL)
		{
			free(alloc_grid);
			for (j = 0; j <= height; j++)
				free(alloc_grid[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			alloc_grid[i][j] = 0;
	}
	return (alloc_grid);

}
