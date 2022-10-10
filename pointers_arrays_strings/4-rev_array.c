#include "main.h"

/**
 ** reverse_array - Reverses an integer´s array..
 ** @a: The array of integers to be reversed.
 ** @n: The number of elements in the array.
 **/
void reverse_array(int *a, int n)
{
		int z, i;
			for (i = n - 1; i >= n / 2; i--)
					{
						z = a[n - 1 - i];
										a[n - 1 - i] = a[i];
												a[i] = z;
													}
}
