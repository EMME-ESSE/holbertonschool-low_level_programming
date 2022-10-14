#include "main.h"
/**
** _print_rev_recursion - Prints a string in reverse
** @s: the string
**/
void _print_rev_recursion(char *s);
{
	_print_rev_recursion(s + 1);
}
