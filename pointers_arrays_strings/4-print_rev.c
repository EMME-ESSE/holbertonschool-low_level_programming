#include "main.h"
#include <string.h>
/**
 *  *  * _strlen - Writes the length of a string.
 *   *   * @s: The length of the string .
 *    *    * Return: 0
**/
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
while (len)
_putchar(s[--len]);
_putchar('\n');
}
