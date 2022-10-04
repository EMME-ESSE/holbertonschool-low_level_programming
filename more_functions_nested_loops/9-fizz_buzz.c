#include "main.h"
/**
  *  * main - Prints numbers from 0 to 100 with a phrase depending on * 3 or * 5 or both.
**/
void main(void)
{
int fizz;
for (fizz = 1; fizz < 100; fizz++)
{
if ((fizz % 3) == 0)
_putchar('Fizz');
else if ((fizz % 5) == 0)
_putchar('Buzz');
else if ((fizz % 5) == 0 && (fizz % 3) == 0)
_putchar('FizzBuzz');
else
_puchar(fizz + '0');
}
if (fizz == 100)
continue;
_putchar(' ');
_putchar('\n');
return(0);
}
