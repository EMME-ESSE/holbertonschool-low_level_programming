#include "main.h"
/**
 *
 * */
char *_strdup(char *str)
{
	unsigned int i;
	char *string2;
	string2 = malloc(sozeof(char) * strlen(str) + 1);
	if (str == NULL)
		return(NULL);
	if (string2 == NULL)
		return (NULL);
	else
	{			
		for (i = 0; i < strlen(str) + 1; i++)
			string2[i] = strlen(str) + 1;
	}
	return (string2);
}
