#include "main.h"
/**
 *
 * */
char *_strdup(char *str)
{
	unsigned int i;
	char *string2;
	string2 = malloc(sizeof(char) * strlen(str) + 1);
	if (str == NULL)
		return(NULL);
	if (string2 != NULL && str != NULL)
	{			
		for (i = 0; i <= strlen(str) + 1; i++)
			string2 += str[i];
	}
	return (string2);
	free(string2);
}
