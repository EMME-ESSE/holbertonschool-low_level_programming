#include "main.h"
/**
 *  *  *  * print_rev - Writes a String in reverse.
 *   *   *   * @s: The String .
 *    *    *    * Return: 0
 *    **/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d",a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
