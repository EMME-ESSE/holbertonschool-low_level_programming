#include "3-calc.h"

int op_add(int a, int b)
/**
 *op_add - adds two integers
 * op_sub - Substract two integers
 * op_mul - Multiply two integers
 * op_div - Calculates the division of two integers
 * op_mod - Calculates the module two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
**/
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
