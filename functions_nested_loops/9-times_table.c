#include "main.h"
/**
 *  * times_table - Prints the 9 times table.
 *   *
 *   **/
void times_table(void)
{
int tb;
int mul;
int tot;

for (tb = 0; tb <= 9; tb++)
{
printf ("\n");
{
for (mul = 0; mul <= 9; mul++)
{
tot = tb*mul;	
if ((tot / 10) == 0)
{
if (mul != 9)	
printf ("%d,  ", tot);
else
printf ("%d", tot)
}
else 
printf ("%d, ", tot);
}
}
}
}	
