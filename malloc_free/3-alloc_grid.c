#include "main.h"
/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: 0
**/
int **alloc_grid(int width, int height)
{
	int iw, i;
	int **puntero;

	if (width <= 0 || height <= 0)
		return (NULL);
	puntero = malloc(width * sizeof(int *) + 1);
	if (puntero == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		puntero[i] = malloc(height * sizeof(int));
		if (puntero[i] == NULL)
		{				
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (iw = 0; iw < width; iw++)
			pointer[i][iw] = 0;
	}
	return (puntero);
}
