#include "main.h"
/**
 *  *  * _strlen - Writes the length of a string.
 *   *   * @s: The length of the string .
 *    *    * Return: 0
 *    **/
int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}



/**
 *
 * */
char *_strdup(char *str)
{
	int i;
	char *string2;
	string2 = malloc(sizeof(char) * _strlen(str) + 1);
	if (str == NULL)
		return(NULL);
	if (string2 != NULL && str != NULL)
	{			
		for (i = 0; i <= _strlen(str) + 1; i++)
			string2 += str[i];
	}
	return (string2);
}
