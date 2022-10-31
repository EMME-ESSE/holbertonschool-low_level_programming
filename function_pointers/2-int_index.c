#include "function_pointers.h"
/**
 *int_index -  function that searches for an integer
 *
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array <= 0)
		return(NULL);
	if (size <= 0)
		return(-1);
	if(cmp == 0)
		return(NULL);
	while (size --> 0)
	{
		cmp(array);
		array++;
	}
}
