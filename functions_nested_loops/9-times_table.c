#include "main.h"
/**
 * times_table - Prints the 9 times table.
 *
**/
void times_table(void)
{
int tb;
int mul;
 for (int tb = 1; tb <= 20; tb++) {
	       for (int mul = 1; mul <= 10; mul++) {
(tb + " * " + (mul) + " = " + (tb * (mul)));
	       }
}
