#include "main.h"
/**
 *  * _strlen - Writes the length of a string.
 *   * @str: The length of the string .
 *    * Return: 0 
**/
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
