#include "main.h"
/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the characters counter of s2.
 * Return:0
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i;
	int size;
	unsigned int sizes1 = 0;

	size = strlen(s1) + strlen(s2);
	pointer = malloc(sizeof(char) * size + 1);
	if (pointer == NULL)
		return (NULL);
	if (s1 == NULL)
		return ("");
        if (s2 == NULL)
	        return ("");
	for (i = 0; s1[i]; i++)
	{
		pointer[i] = s1[i];
		sizes1++;
	}
	if (n != 0)
	{
		for (i = 0; s2[i]; i++)
			pointer[sizes1++] = s2[i];
	}
	return (pointer);
}
