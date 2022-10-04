#include "main.h"
/**
*  * print_diagonal - Prints the diagonal depending to the input "n".
*  * @n: input for the diagonal.
**/
void print_diagonal(int n)
{
int l;
if (n > 0)
{
for (l = 0; l < n; l++)
{
_putchar('\\');
_putchar(' ');
_putchar('\n');
}
}
_putchar('\n');
}
