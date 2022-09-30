#include "main.h"
/**
 *  * times_table - Prints the 9 times table.
 *   *
 *   **/
void times_table(void)
{
int tb;
int mul;
int t;

for (tb = 0; tb <= 9; tb++)
{

for (mul = 0; mul <= 9; mul++)
{
t = tb*mul;	
if ((t / 10) == 0)
{
if (mul != 9)	
_putchar (t);
_putchar (',');
_putchar (' ');
_putchar (' ');
else
_putchar (t);
}
else 
_putchar (t);
_putchar (',');
_putchar (' ');
}
}
_putchar ("\n");
}
