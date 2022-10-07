#include "main.h"
/**
 * *  *_strcpy - copies the string pointed to by src.
 * *  @dest: A pointer to destination of string.
 *  * @src: A pointer to source string to copy from.
 *    * Return: pointer to de
**/
char *_strcpy(char *dest, char *src)
{
char *ayuda = dest;
while (*src)
	*dest++ = *src++;
return (ayuda);
}
