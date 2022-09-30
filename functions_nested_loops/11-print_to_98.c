#include "main.h"
/**
 *  * print_to_98 - Prints numbers from n to 98 in order, with a comma followed by a space
 *    * @n: The start counting number.
**/
void print_to_98(int n)
{
for (n >= 98)
{
if (n > 98)
{
printf("%d, ", n--);
printf("%d\n", n);
}
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
