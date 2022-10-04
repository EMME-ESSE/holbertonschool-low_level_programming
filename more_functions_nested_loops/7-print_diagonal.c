#include "main.h"
/**
*  * print_diagonal - Prints the diagonal depending to the input "n".
*  * @n: input for the diagonal.
**/
void print_diagonal(int n)
{
int l, f;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (f = 0; f < l; f++)
_putchar(' ');
_putchar('\\');
if (l == n -1)
continue;
putchar('\n');
}
}
_putchar('\n');
}
