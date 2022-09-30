#include "main.h"
/**
 *  * print_last_digit - Last digit
 *   * @n: Desc
 *    * Description: Prints the last digit in different sign cases
 *     * Return: n
 *      */
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
