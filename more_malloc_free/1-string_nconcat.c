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

 	if (s1 == NULL)
		return ("");
        if (s2 == NULL)
		return ("");
	size = n;
	if (n > strlen(s2))
		size = strlen(s2);
	pointer = malloc(sizeof(char)*(size + strlen(s1)) + 1);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0' ; i++)
	{
		pointer[i] = s1[i];
		sizes1++;
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		pointer[sizes1++] = s2[i];
	}
	printf("%s\n", pointer);
	pointer[i] = '\0';
	return (pointer);
}
