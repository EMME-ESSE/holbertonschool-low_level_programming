#include "main.h"
/**
 *  *  * _strlen - Writes the length of a string.
 *   *   * @s: The length of the string .
 *    *    * Return: 0
**/
void rev_string(char *s)
{
int len = 0, a = 0;
char ayuda;
while (s[len] != '\0')
len++;
while (a < len--)
{
ayuda = s[a];
s[a++] = s[len];
s[len] = ayuda;
}
}
