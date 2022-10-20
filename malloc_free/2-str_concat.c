#include "main.h"
/*
 *
*/
char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int punto, i;
	int size;
	size = strlen(s1) + strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	pointer = malloc(sizeof(char) * size + 1);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		pointer[punto++] = s1[i];
	for (i = 0; s2[i]; i++)
		pointer[punto++] = s2[i];
	return (pointer);

}
