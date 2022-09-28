#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *    * Return: Always 0 (Success)
**/
int main(void)
{
int hx;
char low;
for (hx = '0'; hx <= '9'; hx++)
putchar(hx);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
