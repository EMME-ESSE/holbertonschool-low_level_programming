#include "3-calc.h"
/**
 *  * main - conditions and picker
 *   * Return: 0 on succes
 *    * @argc: Number of arguments
 *     * @argv: Array of arguments
**/
int main(int argc, char *argv[])
{
	char *op;
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	(void)argv;
	return (0);
}
