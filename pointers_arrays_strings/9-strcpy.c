#include "main.h"
/**
 * *  *_strcpy - copies the string pointed to by src.
 * *  @dest: A pointer to destination of string.
 *  * @src: A pointer to source string to copy from.
 *    * Return: pointer to de
**/
char *_strcpy(char *dest, const char *src)
{
		int index = 0;

			while (src[index])
					{
								dest[index] = src[index];
										index++;
											}

				return (dest);
}
