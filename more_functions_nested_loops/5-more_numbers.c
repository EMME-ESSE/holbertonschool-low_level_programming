#include "main.h"
/**
 *  * more_numbers - Prints the numbers 0-14 ten times.
**/
void more_numbers(void)
{
int a, b;
for (a = 0; a < 11; a++)
{
	for (b = 0; b <= 14; b++)
	_putchar(b + '0');
}
_putchar('\n')
}
