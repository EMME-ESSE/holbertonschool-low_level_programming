#include "search_algos.h"
/**
* linear_search - Searchs a value in an array using linear searching
* @array: The array to search in
* @value: Value to search
* @size: Size of the array
* Return: The index of the value in the Array, -1 if it fails
**/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i <= array[size - 1]; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);

}
