#include "main.h"
/**
 *  * print_numbers - Multiples two integers.
 *   * @a: Number to print.
 *      * Return: The result of the multiplication.
**/
void print_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
_putchar((a % 10) + '0');
_putchar('\n');
}
}
