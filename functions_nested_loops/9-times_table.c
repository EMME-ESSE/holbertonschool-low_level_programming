#include "main.h"
/**
 * times_table - Prints the 9 times table.
 *
**/
void times_table(void)
{
int tb;
int mul;
for (tb = 1; tb <= 10; tb++)
{
for (mul = 0; mul <= 9; mul++)
printf ("%d", tb*mul);
}
}
