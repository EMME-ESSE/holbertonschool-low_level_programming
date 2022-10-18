#include "main.h"
/**
** main - Write a program that multiplies two numbers
** @argc: This is the number of arguments
** @argv: This is the array of argument
** Return: Zero upon program success
**/
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
}
