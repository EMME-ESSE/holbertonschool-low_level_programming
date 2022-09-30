#include "main.h"
/**
** print_last_digit - Print the las digits of few numbers.
** @r: Prints the last digit.
 *  * Return: n
**/
int print_last_digit(int n)
{
if (n >= 0)
{
n = n % 10;
_putchar('0' + n);
}
else
{
n = (n % 10) * -1;
_putchar('0' + n);
}
return (n);
}
