#include "main.h"
/**
** factorial - a function that returns the factorial of a number.
** @n: The int
** Return: The factorial of an integer with a return depending his sign
**/
int factorial(int n)
{
if (n == 0)
{
return 1;
}
if (n < 0)
{
return (-1);
}
return(n * factorial(n-1));
}
