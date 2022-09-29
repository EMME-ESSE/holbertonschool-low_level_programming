#include "main.h"
/**
 * * print_alphabet - Check description
 * * Description: It prints the alphabet in lowercase fallowed by a new line
 * * Return: Nothing.
**/
void print_alphabet_x10(void);
{
int a;	
char word[8] = "_putchar";
int i;
for (a = 1; a < 10; a++)
{
for (i = 0; i < 8; i++)
putchar(word[i]);
putchar('\n');
}
}
