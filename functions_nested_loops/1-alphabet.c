#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * print_alphabet - Check description
 *   * Description: It prints the alphabet in lowercase fallowed by a new line
 *    * Return: Nothing.
**/
void print_alphabet()
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
