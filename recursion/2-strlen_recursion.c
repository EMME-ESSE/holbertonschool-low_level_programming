#include "main.h"
/**
 *  * _strlen_recursion  - a function that returns the length of a string.
 *   * followed by a new line.
 *    * @s: An input string to printing
 *     * Return: Nothing
**/
int _strlen_recursion(char *s)
{
int i;
if(s[i]=='\0')
return 0;
else
return (1+_strlen_recursion(s,i+1));
}
