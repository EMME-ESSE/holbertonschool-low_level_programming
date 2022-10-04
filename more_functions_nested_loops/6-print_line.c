#include "main.h"
/**
*  * print_line - Prints lines depending to the input "n" .
*  * @n: The input int.
**/
void print_line(int n)
{
int l;
if (n > 0)
{
for (l = 0; l < n; l++)
_putchar('_');
}
_putchar('\n');
}
