#include "3-calc.h"
int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}
}
