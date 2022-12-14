#include "variadic_functions.h"
/**
 *  * print_numbers - function that returns the sum of all its parameters
 *   * @separator:is the string to be printed between numbers
 *   * @n:number of integers
 *    * @...:A number of paramters to calculate the sum of
 *     * Return: s
 *     **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
