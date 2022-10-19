#include "main.h"
/**
 * create_array -  function that creates an array of chars, and initializes it with a specific char
 * @size: the array's size
 * @c: the memory pointer
**/
char *create_array(unsigned int size, char c)
{
	char *p;
	p = (char *) malloc(sizeof(char) * size);
	unsigned int i;
	if (size == 0 )
		return("NULL");
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return(p);
}
