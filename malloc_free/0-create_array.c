#include "main.h"
/**
 * create_array -  function that creates an array of chars, and initializes it with a specific char
 * @size: the array's size
 * @c: the memory pointer
**/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int inv;
	p = (char *) malloc(sizeof(char) * size);
	if (size == 0 )
		return("NULL");
	if (p != NULL)
	{
		while (inv < size)
		{
			*(p + inv) = c;
			inv++;
		}
	}
	if (p == NULL)
		return (NULL);
	*(p + inv) = '\0';
	return(p);
}
