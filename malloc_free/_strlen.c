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
