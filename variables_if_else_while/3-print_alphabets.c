#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *    * Return: Always 0 (Success)
**/
int main()
{
char i;
printf("Capital (upper) case characters:\n");
for(i='A'; i<='Z'; i++)
printf("%c ",i);	     
printf("\n\nLower case characters:\n");
for(i='a'; i<='z'; i++)
printf("%c ",i);		         
return 0;
}
