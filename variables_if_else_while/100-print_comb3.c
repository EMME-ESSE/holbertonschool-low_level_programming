#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  * main - Entry point
*    * Return: Always 0 (Success)
**/
int main(void)
{
int d;
for (d = 10; d <= 99; d++)
{
putchar(d);
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
