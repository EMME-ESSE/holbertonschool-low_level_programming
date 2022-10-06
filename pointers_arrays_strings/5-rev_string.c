#include "main.h"
/**
 *  *  * _strlen - Writes the length of a string.
 *   *   * @s: The length of the string .
 *    *    * Return: 0
**/
void rev_string(char *s)
{
int len = 0;
char cas;
while (s[len] != '\0')
	len--;
while (len)
_putchar(s[--len]);
_putchar('\n');
}
