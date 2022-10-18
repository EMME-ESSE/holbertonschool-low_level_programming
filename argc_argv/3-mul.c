#include "main.h"
/**
 *  * main - Write a program that multiplies two numbers
 *   * @argc: This is the number of arguments
 *    * @argv: This is the array of argument 
 *      * Return: Zero upon program success
**/

int main(int argc, char *argv[])
{
int i;
int result = 1;
for (i = 1; i < argc; i++)
{
result = result * argv[i];
}
printf("%d\n", result);
return (0);
}
