#include "main.h"
/*
 **str_concat - Write a function that concatenates two strings
 * @s1: first string 
 * @s2: second string
 * Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int i;
	int size;
	int sizes1 = 0;

	size = strlen(s1) + strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
