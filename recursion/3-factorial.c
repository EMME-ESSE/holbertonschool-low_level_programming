#include "main.h"
/**
** factorial - a function that returns the factorial of a number.
** @n: The int
** Return: The length of the string
**/
int factorial(int n)
{
int fact = (n * factorial(n-1));
if (n == 0)
return 1;
if (n < 0)
return -1;
return (fact);
}
