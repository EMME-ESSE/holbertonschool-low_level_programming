#include"main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: the parmether.
 * Return: 0;
 **/
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
