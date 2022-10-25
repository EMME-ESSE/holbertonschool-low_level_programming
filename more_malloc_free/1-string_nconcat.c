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
		s1 = "";
        if (s2 == NULL)
	        s2 = "";
	printf("cabes");
	for (i = 0; s1[i]; i++)
	{
		pointer[i] = s1[i];
		sizes1++;
	}
	printf("dfsjfhskdf");
	if (n != 0)
	{
		for (i = 0; s2[i]; i++)
			pointer[sizes1++] = s2[i];
	}
	printf("BIBI3");
	else
	{
		s2 = "";
		pointer[sizes1++] = s2[i];
	}
	printf("soy el 4");
	return (pointer);
}
