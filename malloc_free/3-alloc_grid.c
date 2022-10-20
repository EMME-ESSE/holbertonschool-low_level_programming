#include "main.h"
/**
 *
 *
**/
int **alloc_grid(int width, int height)
{
	int i;
	int **puntero;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	puntero = malloc(width * sizeof(int *) + 1);
	if (puntero == NULL)
		return (NULL);
	for(i = 0; i < width; i++)
	{
		puntero[i] = malloc(height * sizeof(int));
		if (puntero[i] == NULL)
			return (NULL);
	}
	return (puntero);
}
