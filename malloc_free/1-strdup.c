#include "main.h"
/**
 * *_strdup - function that returns a pointer to a newly
 *  allocated space in memory, which contains a copy
 *   of the string given as a parameter
 *   @str: The first string
 *   Return: The pointer to the string
**/
char *_strdup(char *str)
{
	unsigned int i;
	char *string2;

	if (str == NULL)
	{
		return (NULL);
	}
	string2 = malloc(sizeof(char) * strlen(str) + 1);
	if (string2 == NULL)
		return (NULL);

	for (i = 0; i <= strlen(str) + 1; i++)
		string2[i] = str[i];
	return (string2);
}
