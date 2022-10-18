#include "main.h"
/**
 *  * main - Write a program that multiplies two numbers
 *   * @argc: This is the number of arguments
 *    * @argv: This is the array of argument 
 *      * Return: Zero upon program success
**/
int main(int argc, char *argv[])
{
int n,m;
if(argc!=2){
printf("Error");
return(1);
}else{
printf("El resultado es %d", n*m);
}
return 0;
}
