#include "search_algos.h"
/**
 * binary_search - Searchs a value in an array using binary searching
 * @array: Array to search in
 * @size: Size of the array
 * @value: Value to search at the array
 * Return: The index of the value in the array, -1 if it fails
**/
int binary_search(int *array, size_t size, int value)
{
	int i, low, high, mid;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
