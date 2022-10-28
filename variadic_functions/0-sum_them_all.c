#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n:The number of paramters passed to the function
 * @...:A number of paramters to calculate the sum of
**/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
int i, sum;
va_start (nums, n);       
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg (nums, int);
va_end (nums);
return sum;
}
