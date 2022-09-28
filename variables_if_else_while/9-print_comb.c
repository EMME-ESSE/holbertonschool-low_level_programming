#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
**/
void main()
{
int temp, i, n;
for (i = 0; i < 10; i++)
{
temp = num[i];
num[i] = num[i+1];
num[i+1] = temp;
print(num, n);
}
return 0;
}
