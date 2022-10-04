#include "main.h"
/**
*  * print_line - Prints lines depending to the input "n" .
**/
void print_diagonal(int n)
{
int l;
if (n > 0)
{
for (l = 0; l < n; l++)
{
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
