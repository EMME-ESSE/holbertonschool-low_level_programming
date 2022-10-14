#include "main.h"
/**
 *  * _strlen_recursion  - a function that returns the length of a string.
 *   * followed by a new line.
 *    * @s: An String
 *     * Return: Nothing
**/
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
return (0);
}
