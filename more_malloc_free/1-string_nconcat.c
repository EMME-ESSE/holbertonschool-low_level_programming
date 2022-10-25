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
	int i = 0;
	int size;
	unsigned int sizes1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2);
	if (n < strlen(s2))
		pointer = malloc(sizeof(char) * (strlen(s1) + n));
	if (n >= strlen(s2))
		pointer = malloc(sizeof(char) * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		pointer[i] = s1[i];
		sizes1++;
	}
	if (n != 0)
	{
		for (i = 0; i <= n; i++)
			pointer[sizes1++] = s2[i];
	}
	else
	{
		s2 = "";
		pointer[sizes1++] = s2[i];
	}
	return (pointer);
}
