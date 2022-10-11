#include "main.h"
/**
 * **_memcpy - Write a function that copies memory area
 * ** @src: memory area pointer
 * ** @n: Bytes from memory area.
 * ** @dest: the new memory pointer.
 * ** Return: A pointer to dest
 * **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *aux = dest;
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (aux);
}
