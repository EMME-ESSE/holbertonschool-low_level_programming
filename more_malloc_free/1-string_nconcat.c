#include "main.h"
/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the characters counter of s2.
 * Return:0
**/
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *pointer;
	int i;
	int size;
	int sizes1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2);
	
	if (n >= s2)
	{
		pointer = malloc(size + 1);
		if (pointer == NULL)
			return (NULL);
		for (i = 0; s1[i]; i++)
		{
			pointer[i] = s1[i];
			sizes1++;
		}
		for (i = 0; s2[i]; i++)
			pointer[sizes1++] = s2[i];
		return (pointer);
	}
	if (n < s2)
	{
		pointer = malloc(sizeof(char) * size + 1);
		if (pointer == NULL)
			return (NULL);
		for (i = 0; s1[i]; i++)
		{
			pointer[i] = s1[i];
			sizes1++;
		}
		for (i = 0; s2[i]; i++)
			pointer[sizes1++] = s2[i];
		return (pointer);
	}
}
