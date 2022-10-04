#include "main.h"
/**
  *  * main - Prints numbers from 0 to 100 with a phrase depending on * 3 or * 5 or both.
**/
int main(void)
{
int fizz;
for (fizz = 1; fizz < 100; fizz++)
{
if ((fizz % 3) == 0)
printf("Fizz");
else if ((fizz % 5) == 0)
printf("Buzz");
else if ((fizz % 5) == 0 && (fizz % 3) == 0)
printf("FizzBuzz");
else
printf("%d", fizz);
}
if (fizz == 100)
continue;
printf(" ");
_putchar("\n");
return(0);
}
