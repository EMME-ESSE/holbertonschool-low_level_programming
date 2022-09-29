#include "main.h"
/**
 *  * _isalpha - Check Holberton
 *   * @c: An input character
 *    * Description: function 
 *      * Return: returns 1 if c is a letter, lowercase or uppercase 0 otherwise
**/
int _isalpha(int c)
{
char i, j;
int num = 0;
for (i = 'a'; i <= 'z'; i++)
{
for (j = 'A'; j <= 'Z'; j++)
{
if (i == c || c == j)
num = 1;
}
}
return (num);
}
