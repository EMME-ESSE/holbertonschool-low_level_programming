#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *  * get_op_func - Select the correct operator
 *   * Return: Operator
 *    * @symb: Operator writed by the user
 *     */
int (*get_op_func(char *symb))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	return (ops);
}
