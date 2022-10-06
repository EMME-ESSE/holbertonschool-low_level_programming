#include "main.h"
#include <string.h>
/**
 *  *  * print_rev - Writes a String in reverse.
 *   *   * @s: The String .
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
