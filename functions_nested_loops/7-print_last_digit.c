#include "main.h"
/**
** print_last_digit - Print the las digits of few numbers.
** @r: Prints the last digit
** Return: 0.
**/
int print_last_digit(int r)
{
r = (r % 10);	
_putchar ('0' + r);
return (r);
}
