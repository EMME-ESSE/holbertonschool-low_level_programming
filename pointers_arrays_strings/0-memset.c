#include "main.h"
/**
**_memset - Write a function that fills memory with a constant byte.
** @*s: Memory area´s pointer
** @n: Bytes of memory.
** @b: constant byte
** Return: A pointer to the memory area s..
**/
char *_memset(char *s, char b, unsigned int n)
{
char *aux = s;
while (n--)
{
*s = b;
s++;
}
return (aux);
}
