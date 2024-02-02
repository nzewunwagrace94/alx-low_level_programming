#include "main.h"
/**
 * free_grid - free 2 dimentional grid
 * @grid: the pointer
 * @height: the number of rows
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
