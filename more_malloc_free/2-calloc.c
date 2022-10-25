#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 *  @s: Memory area´s pointer
 *  @n: Bytes of memory.
 *  @b: constant byte
 *  Return: A pointer to the memory area s..
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lok;

	for (lok = 0; lok < n; lok++)
	{
		s[lok] = b;
	}
	return (s);
}

/**
 * _calloc - the function,
 * @nmemb: the elements;
 * @size: the size of bytes;
 * Return: 0;
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pun;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pun = malloc(size * nmemb);
	if (pun == NULL)
	{
		return (NULL);
	}
	_memset(pun, 0, size * nmemb);
	return (pun);
}
