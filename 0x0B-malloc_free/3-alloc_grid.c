#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	g = malloc(height * sizeof(*g));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(**g));
		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
