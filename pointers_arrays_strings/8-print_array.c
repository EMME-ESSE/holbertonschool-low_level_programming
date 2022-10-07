#include "main.h"
/**
*  * print_array - Prints n elements of an array of integers.
*   * @s: The array of integers .
*    * Return: 0.
**/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
