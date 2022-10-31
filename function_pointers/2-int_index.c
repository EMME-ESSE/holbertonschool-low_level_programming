#include "function_pointers.h"
/**
 *int_index -  function that searches for an integer
 *
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL)	
		return;
	if (size <= 0)
		return(-1);
	if(cmp == NULL)
		return;
	while (size --> 0)
	{
		cmp(array);
		array++;
	}
}
