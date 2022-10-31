#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer
 *@array: the primary array
 *@size: the number of elements
 *@cmp: pointer to the function to be used to compare values
 *Return:
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
