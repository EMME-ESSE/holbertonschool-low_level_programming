#include "main.h"
/**
 * create_array -  function that creates an array of chars, and initializes it with a specific char
 * @size: the array's size
 * @c: the memory pointer
**/
char *create_array(unsigned int size, char c)
{
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *d;

	d = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (d != NULL)
	{
		for (n = 0; n < size; n++)
		{
			d[n] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (d);
}
}
