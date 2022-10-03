#include "main.h"
/**
 *  *  * _isdigit - Checks if the character is a number or not..
 *   *   * @c: The digit to be checked..
 *    *     * Return: 1 if it is a digit and 0 otherwise.
 *    **/
int _isupper(int c)
{

	if (isdigit(c) == 0)
		         printf("%c is not a digit.",c);
	    else
		             printf("%c is a digit.",c);
	        return 0;
}
